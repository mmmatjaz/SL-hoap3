function mklqr(pid, seg_num)

fname = ['E_' itoa(pid, 5) '.mat'];
if exist(fname) == 0
  E = load_trace(pid);
  save(fname, 'E');
else
  load(fname);
end

figure(1); clf
figure(2); clf
figure(3); clf
figure(4); clf
%figure(5); clf

%
% lqr
%

%N = 28; D = 12;
%N = 32; D = 14;
%N = 32; D = 14;
%N = 2*(2 + 14 + 2 + 12); D = 2*7 + 2 + 2*6;
%N = 2*(2 + 4 + 2 + 12); D = 2*2 + 2 + 2*6;
N = 2*(2 + 8 + 2 + 14); D = 2*4 + 2 + 2*7;

fprintf('N=%d, D=%d\n', N, D);
if N == 32 & D == 14
  E.state_idx = [E.GYRO_ROL E.GYRO_PIT ... %E.L_FF E.R_FF ...
		 E.B_TFE E.B_TAA ...
		 E.L_HFE E.L_HAA E.L_HFR E.L_KFE E.L_AFE E.L_AAA ...
		 E.R_HFE E.R_HAA E.R_HFR E.R_KFE E.R_AFE E.R_AAA ...
		 E.GYRO_ROL_D E.GYRO_PIT_D ... %E.L_FF_D E.R_FF_D ...
		 E.B_TFE_D E.B_TAA_D ...
		 E.L_HFE_D E.L_HAA_D E.L_HFR_D E.L_KFE_D E.L_AFE_D E.L_AAA_D ...
		 E.R_HFE_D E.R_HAA_D E.R_HFR_D E.R_KFE_D E.R_AFE_D E.R_AAA_D];
  E.action_idx = [E.B_TFE_A E.B_TAA_A ...
		  E.L_HFE_A E.L_HAA_A E.L_HFR_A E.L_KFE_A E.L_AFE_A E.L_AAA_A ...
		  E.R_HFE_A E.R_HAA_A E.R_HFR_A E.R_KFE_A E.R_AFE_A E.R_AAA_A];
elseif N == 40 & D == 18
  E.state_idx = [E.GYRO_ROL E.GYRO_PIT ...
		 E.L_SFE E.L_SAA ...
		 E.R_SFE E.R_SAA ...
		 E.B_TFE E.B_TAA ...
		 E.L_HFE E.L_HAA E.L_HFR E.L_KFE E.L_AFE E.L_AAA ...
		 E.R_HFE E.R_HAA E.R_HFR E.R_KFE E.R_AFE E.R_AAA ...
		 E.GYRO_ROL_D E.GYRO_PIT_D ...
		 E.L_SFE_D E.L_SAA_D ...
		 E.R_SFE_D E.R_SAA_D ...
		 E.B_TFE_D E.B_TAA_D ...
		 E.L_HFE_D E.L_HAA_D E.L_HFR_D E.L_KFE_D E.L_AFE_D E.L_AAA_D ...
		 E.R_HFE_D E.R_HAA_D E.R_HFR_D E.R_KFE_D E.R_AFE_D E.R_AAA_D];
  E.action_idx = [E.L_SFE_A E.L_SAA_A ...
		  E.R_SFE_A E.R_SAA_A ...
		  E.B_TFE_A E.B_TAA_A ...
		  E.L_HFE_A E.L_HAA_A E.L_HFR_A E.L_KFE_A E.L_AFE_A E.L_AAA_A ...
		  E.R_HFE_A E.R_HAA_A E.R_HFR_A E.R_KFE_A E.R_AFE_A E.R_AAA_A];
elseif N == 52 & D == 24
  E.state_idx = [E.GYRO_ROL E.GYRO_PIT ...
		 E.L_SFE E.L_SAA E.L_HR E.L_EB ...
		 E.R_SFE E.R_SAA E.R_HR E.R_EB ...
		 E.B_TFE E.B_TAA ...
		 E.L_HFE E.L_HAA E.L_HFR E.L_KFE E.L_AR E.L_AFE E.L_AAA ...
		 E.R_HFE E.R_HAA E.R_HFR E.R_KFE E.R_AR E.R_AFE E.R_AAA ...
		 E.GYRO_ROL_D E.GYRO_PIT_D ...
		 E.L_SFE_D E.L_SAA_D E.L_HR_D E.L_EB_D ...
		 E.R_SFE_D E.R_SAA_D E.R_HR_D E.R_EB_D ...
		 E.B_TFE_D E.B_TAA_D ...
		 E.L_HFE_D E.L_HAA_D E.L_HFR_D E.L_KFE_D E.L_AR_D E.L_AFE_D E.L_AAA_D ...
		 E.R_HFE_D E.R_HAA_D E.R_HFR_D E.R_KFE_D E.R_AR_D E.R_AFE_D E.R_AAA_D];
  E.action_idx = [E.L_SFE_A E.L_SAA_A E.L_HR_A E.L_EB_A ...
		  E.R_SFE_A E.R_SAA_A E.R_HR_A E.R_EB_A ...
		  E.B_TFE_A E.B_TAA_A ...
		  E.L_HFE_A E.L_HAA_A E.L_HFR_A E.L_KFE_A E.L_AR_A E.L_AFE_A E.L_AAA_A ...
		  E.R_HFE_A E.R_HAA_A E.R_HFR_A E.R_KFE_A E.R_AR_A E.R_AFE_A E.R_AAA_A];

elseif N == 60 & D == 28
  E.state_idx = [E.GYRO_ROL E.GYRO_PIT ...
		 E.L_SFE E.L_SAA E.L_HR E.L_EB E.L_WR E.L_WFE E.L_WAA ...
		 E.R_SFE E.R_SAA E.R_HR E.R_EB E.R_WR E.R_WFE E.R_WAA ...
		 E.B_TFE E.B_TAA ...
		 E.L_HFE E.L_HAA E.L_HFR E.L_KFE E.L_AFE E.L_AAA ...
		 E.R_HFE E.R_HAA E.R_HFR E.R_KFE E.R_AFE E.R_AAA ...
		 E.GYRO_ROL_D E.GYRO_PIT_D ...
		 E.L_SFE_D E.L_SAA_D E.L_HR_D E.L_EB_D E.L_WR_D E.L_WFE_D E.L_WAA_D ...
		 E.R_SFE_D E.R_SAA_D E.R_HR_D E.R_EB_D E.R_WR_D E.R_WFE_D E.R_WAA_D ...
		 E.B_TFE_D E.B_TAA_D ...
		 E.L_HFE_D E.L_HAA_D E.L_HFR_D E.L_KFE_D E.L_AFE_D E.L_AAA_D ...
		 E.R_HFE_D E.R_HAA_D E.R_HFR_D E.R_KFE_D E.R_AFE_D E.R_AAA_D];
  E.action_idx = [E.L_SFE_A E.L_SAA_A E.L_HR_A E.L_EB_A E.L_WR_A E.L_WFE_A E.L_WAA_A ...
		  E.R_SFE_A E.R_SAA_A E.R_HR_A E.R_EB_A E.R_WR_A E.R_WFE_A E.R_WAA_A ...
		  E.B_TFE_A E.B_TAA_A ...
		  E.L_HFE_A E.L_HAA_A E.L_HFR_A E.L_KFE_A E.L_AFE_A E.L_AAA_A ...
		  E.R_HFE_A E.R_HAA_A E.R_HFR_A E.R_KFE_A E.R_AFE_A E.R_AAA_A];
end

% plot nominal and added desired
set(0, 'CurrentFigure', 1);
subplotij(2, 1, 1, 1);
plot(E.t, E.u0, 'LineWidth', 1);
subplotij(2, 1, 2, 1);
plot(E.t, E.add_u, 'LineWidth', 1);

% plot gyro
set(0, 'CurrentFigure', 2);
subplotij(2, 1, 1, 1);
ankle_idx = [E.B_TAA_A E.L_AAA_A E.R_AAA_A];
plot(E.t, [E.x(E.GYRO_ROL, :); E.add_u(ankle_idx, :)], 'LineWidth', 1);
h = legend(['GYRO_ROL' E.label_action(ankle_idx)]);
set(h, 'Interpreter', 'None');

subplotij(2, 1, 2, 1);
ankle_idx = [E.B_TFE_A E.L_AFE_A E.R_AFE_A];
plot(E.t, [E.x(E.GYRO_PIT, :); E.add_u(ankle_idx, :)], 'LineWidth', 1);
h = legend(['GYRO_PIT' E.label_action(ankle_idx)]);
set(h, 'Interpreter', 'None');

%
min_t = min(E.t) + 5;
max_t = max(E.t) - 2;

%target = E.phase;
%target = 0.5*(cos(E.phase + pi) + 1); % 0.6774
E.target = E.phase; % 0.6873
E.min_target = min(E.target);
E.max_target = max(E.target);
bin = linspace(E.min_target, E.max_target, seg_num + 1);

dt = E.dt;
T = E.t(1:(end - 1));
Phase = E.phase(1:(end - 1));
tmpx = E.x(E.state_idx, 1:(end - 1));
tmpu = E.add_u(E.action_idx, 1:(end - 1));
XU = [tmpx; tmpu; ones(1, length(T))];
XU = XU(:, 1:(end - 1));
Y = tmpx((N/2 + 1):N, 2:end);

% low-pass filter
half_sample_freq = 0.5/dt;
cutoff_freq = 20;
cutoff_freq
half_sample_freq
[b, a] = butter(2, cutoff_freq/half_sample_freq);
XU(1:N, :) = filtfilt(b, a, XU(1:N, :)')';
%Y = filtfilt(b, a, Y')';

pred_err = 0;
for seg = 1:seg_num
  fprintf('== %d ==================================\n', seg);
  %
  % data segmentation
  %
  %dt = E.dt;
  %t = E.t(1:(end - 1));
  %phase = E.phase(1:(end - 1));
  %tmpx = E.x(E.state_idx, 1:(end - 1));
  %tmpu = E.add_u(E.action_idx, 1:(end - 1));
  %xu = [tmpx; tmpu; ones(1, length(t))];
  %xu = xu(:, 1:(end - 1));
  %y = tmpx((N/2 + 1):N, 2:end);
  
  % low-pass filter
  %half_sample_freq = 0.5/dt;
  %cutoff_freq = 10;
  %[b, a] = butter(2, cutoff_freq/half_sample_freq);
  %xu(1:N, :) = filtfilt(b, a, xu(1:N, :)')';
  %y = filtfilt(b, a, y')';
  
  % segmentation
  %wave = 0.5*(cos(phase + pi) + 1);
  %idx = find(min_t < t & t < max_t & (bin(seg) < wave & wave < bin(seg + 1)));
  %idx = find(min_t < t & t < max_t & (bin(seg) < tmppit & tmppit < bin(seg + 1)));
  %idx = find(min_t < t & t < max_t & (bin(seg) < phase & phase < bin(seg + 1)));
  
  tmp = abs(pdiff(Phase, (seg - 1)*(2*pi/seg_num)));
  idx = find(min_t < T & T < max_t & tmp < 2*pi/seg_num/2);
  
  idx = idx(1:(end - 1));
  phase = Phase(idx);
  t = T(idx);
  xu = XU(:, idx);
  y = Y(:, idx);
  target = E.target(idx);
  
  fprintf('sample#/param#=%d/%d=%f\n', length(idx), N*(N + D + 1)/2, length(idx)/(N*(N + D + 1)/2));
  
  %
  % linear regression
  %
  W = y*xu'*inv(xu*xu');
  A = [eye(N/2, N/2) eye(N/2, N/2)*dt; W(:, 1:N)];
  B = [zeros(N/2, D); W(:, (N + 1):(N + D))];
  c = [zeros(N/2, 1); W(:, N + D + 1)];
  %[c mean_x]
  %mean(E.x, 2).*180/3.14
  
  Co = ctrb(A, B);
  fprintf('rank(Co)/N = %d/%d\n', rank(Co), length(A));
  
  %
  % cost function
  %
  
  % Q
  Q = zeros(N);
  Q((N/2 + 1):N, (N/2 + 1):N) = eye(N/2)*0.0001;
  
  Q(1, 1) = 1;
  Q(2, 2) = 10;
  %Q(1 + N/2, 1 + N/2) = 0.01;
  %Q(2 + N/2, 2 + N/2) = 0.01;
  
  %idx = find(E.state_idx == E.L_HFR | E.state_idx == E.R_HFR);
  %for n = idx
  %  Q(n, n) = 0.0;
  %end
  
  % R
  R = eye(D)*1e12;
  r = 10.0;
  %idx = find(E.action_idx == E.L_SFE_A | E.action_idx == E.L_SAA_A ...
  %| E.action_idx == E.R_SFE_A | E.action_idx == E.R_SAA_A ...
  %| E.action_idx == E.B_TFE_A | E.action_idx == E.B_TAA_A ...
  %| E.action_idx == E.L_AFE_A | E.action_idx == E.L_AAA_A ...
  %| E.action_idx == E.R_AFE_A | E.action_idx == E.R_AAA_A)
  idx = find(E.action_idx == E.B_TFE_A | E.action_idx == E.L_AFE_A | E.action_idx == E.R_AFE_A);
  for n = idx
    R(n, n) = r;
  end
  idx = find(E.action_idx == E.L_AAA_A | E.action_idx == E.R_AAA_A);
  for n = idx
    R(n, n) = 5*r;
  end
  
  % LQR
  [K, P] = dlqr(A, B, Q, R);
  S = K'*R*K - (A - B*K)'*P*(B*K - eye(N)) - P;
  xc = inv(S)*(A - B*K)'*P*c;
  %xc = mean_x;
  
  fprintf('rank(S)/N = %d/%d\n', rank(S), N);
  fprintf('max(max(abs(inv(S)*S - eye(N)))) = %e\n', max(max(abs(inv(S)*S - eye(N)))));
  
  %
  % plot results
  %
  
  % plot regression parameter
  set(0, 'CurrentFigure', 3);
  rows = seg_num;
  subplotij(rows, 5, [seg seg], [1 2]);
  imagesc(W);
  colorbar('horiz');
  
  subplotij(rows, 5, [seg seg], [3 4]);
  imagesc(K);
  tmp = max(max(abs(K)));
  set(gca, 'CLim', [-tmp tmp]);
  colorbar('horiz');
  
  subplotij(rows, 5, seg, 5);
  imagesc(xc);
  colorbar('horiz');
  
  % plot result of regression
  set(0, 'CurrentFigure', 4);
  rows = seg_num;
  cols = 3;
  subplotij(rows, cols, seg, 1);
  yh = [A B c]*xu;
  yh = yh((N/2 + 1):N, :);
  e = y - yh;
  plot(t, y(3:4, :), '-'); hold on;
  plot(t, yh(3:4, :), '--');
  %plot(t, y(5:10, :)); hold on;
  %plot(t, yh(5:10, :), '--', 'LineWidth', 2);
  pred_err = pred_err + sum(sum(e.^2))*dt;
  
  subplotij(rows, cols, seg, 2);
  tmpx = E.x(E.state_idx, :);
  inp = tmpx - repmat(xc, 1, size(tmpx, 2));
  u = -K*inp;
  plot(E.t, u);
  h = legend(E.label_action{E.action_idx(:)});
  set(h, 'Interpreter', 'None');
  
  subplotij(rows, cols, seg, 3);
  plot(xu(1, :), xu(2, :), '.');
  
  %
  %set(0, 'CurrentFigure', 5);
  %subplotij(2, seg_num, 1, seg);
  %hist(target, 20);
  %set(gca, 'XLim', [E.min_target E.max_target]);
  %
  %subplotij(2, seg_num, repmat(2, 1, seg_num), 1:seg_num);
  %pc = mean(target);
  %ps2 = 0.1*std(target).^2;
  %tmpx = E.min_target:((E.max_target - E.min_target)/1000):E.max_target;
  %tmpy = exp(-(tmpx - repmat(pc, 1, length(pc))).^2/(2*ps2))/(sqrt(2*pi*ps2));
  %plot(tmpx, tmpy, '.'); hold on;
  %set(gca, 'XLim', [E.min_target E.max_target]);
  
  %
  % save results
  %
  full_A = zeros(E.state_dim, E.state_dim);
  full_A(E.state_idx, E.state_idx) = A;
  full_B = zeros(E.state_dim, E.action_dim);
  full_B(E.state_idx, E.action_idx) = B;
  full_c = zeros(E.state_dim, 1);
  full_c(E.state_idx) = c;
  full_K = zeros(E.action_dim, E.state_dim);
  full_K(E.action_idx, E.state_idx) = K;
  full_xc = zeros(E.state_dim, 1);
  full_xc(E.state_idx) = xc;
  full_W = [full_A full_B full_c];
  save(['M' itoa(seg_num, 2) '_W_' itoa(seg - 1, 6) '.dat'], 'full_W', '-ascii');
  save(['M' itoa(seg_num, 2) '_K_' itoa(seg - 1, 6) '.dat'], 'full_K', '-ascii');
  save(['M' itoa(seg_num, 2) '_xc_' itoa(seg - 1, 6) '.dat'], 'full_xc', '-ascii');
  
  %tmp = [pc ps2];
  %save(['M' itoa(seg_num, 2) '_prior_' itoa(seg - 1, 6) '.dat'], 'tmp', '-ascii');
end
pf = fopen('module_num.dat', 'w');
fprintf(pf, '%d', seg_num);
fclose(pf);


pred_err