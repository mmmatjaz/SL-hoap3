function plot_trace(pid)

E = load_trace(pid);

figure(1); clf
figure(2); clf
figure(3); clf
figure(4); clf
figure(5); clf


% show noise variance
% $$$ figure(5); clf
% $$$ L = length(E.t);
% $$$ mean_x = mean(E.x, 2);
% $$$ tmp = E.x - repmat(mean_x, 1, L);
% $$$ a1 = std(tmp')';
% $$$ 
% $$$ [b, a] = butter(2, 0.5);
% $$$ drift_x = filtfilt(b, a, E.x')';
% $$$ tmp = E.x - drift_x;
% $$$ a2 = std(tmp')';
% $$$ 
% $$$ [a1'; a2']
% $$$ plot(E.t, E.x([1 2], :)); hold on;
% $$$ plot(E.t, repmat(mean_x([1 2], :), 1, L), '-');
% $$$ plot(E.t, drift_x([1 2], :), '--');
% $$$ ans =
% $$$   Columns 1 through 17
% $$$     0.0040    0.0042    0.0001    0.0059    0.0001    0.0016    0.0008    0.0002    0.0001    0.0001    0.0004    0.0001    0.0010    0.0007    0.0004    0.0001    0.0002
% $$$     0.0000    0.0000    0.0001    0.0001    0.0001    0.0000    0.0001    0.0001    0.0000    0.0001    0.0001    0.0000    0.0000    0.0001    0.0000    0.0000    0.0000
% $$$   Columns 18 through 34
% $$$     0.0002    0.0066    0.0077    0.0173    0.0220    0.0143    0.0149    0.0166    0.0158    0.0157    0.0184    0.0156    0.0123    0.0146    0.0127    0.0249    0.0121
% $$$     0.0000    0.0024    0.0028    0.0128    0.0129    0.0104    0.0114    0.0122    0.0117    0.0117    0.0138    0.0115    0.0091    0.0109    0.0093    0.0169    0.0090
% $$$   Columns 35 through 36
% $$$     0.0136    0.0138
% $$$     0.0097    0.0104

N = E.state_dim;
rows = 4;
m = 1;
idx_list = {[E.GYRO_ROL E.GYRO_PIT], ...
	    [E.B_TFE E.B_TAA], ...
	    [E.L_HFE:E.L_AAA], ...
	    [E.R_HFE:E.R_AAA]};
for j = 1:2
  for i = 1:4
    set(0, 'CurrentFigure', 1);
    subplotij(rows, 2, i, j);
    idx = idx_list{i} + (j - 1)*N/2;
    plot(E.t, E.x(idx, :)', 'LineWidth', 1); hold on;
    plot(E.t, E.kal_xh{m}(idx, :)', '--', 'LineWidth', 2);
    h = legend(E.label_state{idx(:)});
    set(h, 'Interpreter', 'None', 'FontSize', 8);
  end
end

%
set(0, 'CurrentFigure', 2);
N = E.state_dim;
rows = 4;
m = 1;
idx_list = {[E.GYRO_ROL E.GYRO_PIT], ...
	    [E.B_TFE E.B_TAA], ...
	    [E.L_HFE:E.L_AAA], ...
	    [E.R_HFE:E.R_AAA]};
for j = 1:2
  for i = 1:4
    subplotij(rows, 2, i, j);
    idx = idx_list{i} + (j - 1)*N/2;
    plot(E.t, E.x(idx, :)' - E.kal_xh{m}(idx, :)', 'LineWidth', 1); hold on;
    h = legend(E.label_state{idx(:)});
    set(h, 'Interpreter', 'None', 'FontSize', 8);
  end
end

%
set(0, 'CurrentFigure', 3);
rows = 2;
idx = E.idx_isuse;

subplotij(rows, 1, 1, 1);
plot(E.t, E.u0(idx, :));
legend(E.label_action{idx(:)});

subplotij(rows, 1, 2, 1);
plot(E.t, E.add_u(idx, :));
legend(E.label_action{idx(:)});

%
set(0, 'CurrentFigure', 4);
rows = 2;
for m = 1:E.module_num
  subplotij(rows, E.module_num, 1, m);
  plot(E.t, E.pred_err(m, :)); hold on;
  
  subplotij(rows, E.module_num, 2, m);
  plot(E.t, E.lambda(m, :)); hold on;
  ylabel('lambda');
end

%
set(0, 'CurrentFigure', 5);
rows = 3;
subplotij(rows, 1, 1, 1); % plot phase
plot(E.t, E.phase);

subplotij(rows, 1, 2, 1); % plot prediction error
plot(E.t, E.pred_err);

subplotij(rows, 1, 3, 1); % plot lambda
plot(E.t, E.lambda);
%set(gca, 'YLim', [-0.1 1.1]);


fprintf('sum(gyro_pit^2) = %f\n', sum(E.x(E.GYRO_PIT, :).^2));