function plot_cum_cost

figure(1); clf
d = load('../cum_cost.dat');
plot_d(d, 'green');
d = load('../cum_cost_off.dat');
plot_d(d, 'red');

function plot_d(d, col);
plot(d(:, 1), sum(d(:, 2:3), 2), 'Color', col); hold on;
