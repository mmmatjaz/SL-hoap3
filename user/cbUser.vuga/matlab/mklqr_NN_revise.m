function mklqr_NN_revise(pid)

fname = ['E_' itoa(pid, 5) '.mat'];
if exist(fname) == 0 | 1
  E = load_trace_NN_revise(pid);
  save(fname, 'E');
else
  load(fname);
end

N = E.state_dim;
D = E.action_dim;

M = 100;
w = 40;
bin_list = zeros(M, 2);
for m = [1:M]
  b = (m - 1)*0.1;
  bin_list(m, :) = [b + 10, b + 10 + w] + 120;
  %b = 50*(m - 1);
  %bin_list(m, :) = [b + 10, b + 30];
end
bin_list

dt = E.dt
T = E.t(1:(end - 1));
Phase = E.phase(1:(end - 1));
tmpx = E.x(:, 1:(end - 1));
tmpu = E.u(:, 1:(end - 1));
XU = [tmpx; tmpu; ones(1, length(T))];
XU = XU(:, 1:(end - 1));
Y = tmpx((N/2 + 1):N, 2:end);

% low-pass filter
half_sample_freq = 0.5/dt;
cutoff_freq = 10;
fprintf('cutoff_freq/half_sample_freq=%f\n', cutoff_freq/half_sample_freq);
%[b, a] = butter(2, cutoff_freq/half_sample_freq);
%XU(1:N, :) = filtfilt(b, a, XU(1:N, :)')';
%Y = filtfilt(b, a, Y')';

figure(2); clf
T_W  = cell(M, 1);
T_K  = cell(M, 1);
T_xc = cell(M, 1);
for m = [1:M]
  idx = find(bin_list(m, 1) <= T & T <= bin_list(m, 2));
  idx = idx(1:(end - 1));
  xu = XU(:, idx);
  y = Y(:, idx);
  
  W = y*xu'*inv(xu*xu');
  A = [eye(N/2, N/2) eye(N/2, N/2)*dt; W(:, 1:N)];
  B = [zeros(N/2, D); W(:, (N + 1):(N + D))];
  c = [zeros(N/2, 1); W(:, N + D + 1)];
  
  Co = ctrb(A, B);
  
  % Q
  Q = zeros(N);
  Q(3, 3) = 10;
  Q(6, 6) = 0;
  
  % R
  R = eye(D).*10;
  
  % LQR
  [K, P] = dlqr(A, B, Q, R);
  S = K'*R*K - (A - B*K)'*P*(B*K - eye(N)) - P;
  xc = inv(S)*(A - B*K)'*P*c;
  
  if rank(Co) ~= length(A)
    fprintf('rank(Co)/N = %d/%d\n', rank(Co), length(A));
    fprintf('rank(S)/N = %d/%d\n', rank(S), N);
    fprintf('max(max(abs(inv(S)*S - eye(N)))) = %e\n', max(max(abs(inv(S)*S - eye(N)))));
  end
  
  W = [A B c];
  %K
  %xc
  T_W{m}  = W;
  T_K{m}  = K;
  T_xc{m} = xc;
  
  % plot
  subplot(1, M, m);
  plot(T(idx), xu(1:8, :));
  
  save(['M' itoa(M, 2) '_W_' itoa(m - 1, 6) '.dat'], 'W', '-ascii');
  save(['M' itoa(M, 2) '_K_' itoa(m - 1, 6) '.dat'], 'K', '-ascii');
  save(['M' itoa(M, 2) '_xc_' itoa(m - 1, 6) '.dat'], 'xc', '-ascii');
end

figure(3); clf
A = [];
B = [];
c = [];
for m = [1:M]
  A = [A; reshape(T_W{m}(4:6, 1:6), 1, 18)];
  B = [B; reshape(T_W{m}(4:6, 7:8), 1,  6)];
  c = [c; reshape(T_W{m}(4:6,   9), 1,  3)];
end
subplot(1, 3, 1);
plot(A);

subplot(1, 3, 2);
plot(B);

subplot(1, 3, 3);
plot(c);