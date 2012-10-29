function plot_fm_off

data = load('../fm_off.dat');
y = data(:, 1:2)';
x = data(:, 3:4)';
u = data(:, 5)';
S = size(x, 2)

figure(2); clf
subplot(5, 1, 1);
plot(y(1, :), '-'); hold on;

subplot(5, 1, 2);
plot(y(2, :), '-'); hold on;

subplot(5, 1, 3);
plot(x(1, :), 'c-');

subplot(5, 1, 4);
plot(x(2, :), 'c-');

subplot(5, 1, 5);
plot(u(1, :), 'g-');

