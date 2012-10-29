function E = load_trace_NN_revise(pid)

fname = ['../log/' itoa(pid, 6) '.dat'];
pf = fopen(fname, 'r','ieee-le.l64');
ij = fscanf(pf, '%d %d', 2);
E.state_dim = fscanf(pf, '%d', 1);
E.action_dim = fscanf(pf, '%d', 1);
E.module_num = fscanf(pf, '%d', 1);
E.dt = fscanf(pf, '%f\n', 1);

d = fread(pf, [ij(1), ij(2)], 'double')';
E.trial = d(:, 1);
E.step = d(:, 2);
E.t = d(:, 3)';
E.phase = d(:, 4)';
b = 5;
E.x = d(:, b:(b + E.state_dim - 1))';
b = b + E.state_dim;
E.u = d(:, b:(b + E.action_dim - 1))';
b = b + E.action_dim;
E.lambda = d(:, b:(b + E.module_num - 1))';
b = b + E.module_num;

figure(1);
subplot(3, 1, 1);
plot(E.t, E.x(1:3, :));

subplot(3, 1, 2);
plot(E.t, E.u(1:2, :));

subplot(3, 1, 3);
plot(E.t, E.lambda);
disp(E.module_num)