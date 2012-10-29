function plot_fm

data = load('../fm.dat');
y = data(:, 2:3)';
x = data(:, 4:5)';
u = data(:, 6)';
S = size(x, 2)

z = [x; u; ones(1, S)];
W = y*z'*inv(z*z')
yh = W*z;

figure(1); clf
subplot(5, 1, 1);
plot(y(1, :), '-'); hold on;
plot(yh(1, :), 'r-');

subplot(5, 1, 2);
plot(y(2, :), '-'); hold on;
plot(yh(2, :), 'r-');

subplot(5, 1, 3);
plot(x(1, :), 'c-');

subplot(5, 1, 4);
plot(x(2, :), 'c-');

subplot(5, 1, 5);
plot(u(1, :), 'g-');

x = [0; 0];
for s = 1:S
  z = [x; u(s); 1];
  yh = W*z;
  x = yh;
  
  subplot(5, 1, 1);
  plot(s, yh(1), 'k.');
  subplot(5, 1, 2);
  plot(s, yh(2), 'k.');
end