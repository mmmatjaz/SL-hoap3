function test_g
d=load('../g.dat');


figure(1); clf
for n = 1:3
  tmp = cumsum(d(:, n + 3)).*0.01;
  subplot(3, 1, n);
  plot(d(:, n), 'b-'); hold('on');
  plot(tmp, 'r-');
end