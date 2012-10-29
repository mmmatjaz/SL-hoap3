d = load('../off.dat');
size(d)

figure(1); clf
loop_max = max(d(:, 1));
for loop = 0:loop_max
  idx = find(loop == d(:, 1));
  subplot(3, 1, 1);
  plot(d(idx, 3)); hold on;
  subplot(3, 1, 2);
  plot(d(idx, 4)); hold on;
  subplot(3, 1, 3);
  plot(d(idx, 5)); hold on;
end