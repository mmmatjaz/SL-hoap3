function plot_result(pid)

E = load_trace(pid);
N = 32;

figure(1); clf
subplotij(2, 1, 1, 1);
plot(E.t, E.x(1:(N/2), :)', 'LineWidth', 2); hold on;
plot(E.t, E.kal_xh{1}(1:(N/2), :)', '--');

subplotij(2, 1, 2, 1);
plot(E.t, E.x((N/2 + 1):N, :)', 'LineWidth', 2); hold on;
plot(E.t, E.kal_xh{1}((N/2 + 1):N, :)', '--');