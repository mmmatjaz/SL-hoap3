function howto_decomp(pid)

fprintf('loading data...');
fname = ['E_' itoa(pid, 5) '.mat'];
if exist(fname) == 0
  E = load_trace(pid);
  save(fname, 'E');
else
  load(fname);
end
fprintf('done.\n');


figure(1); clf
subplotij(1, 3, 1, 1);
plot(E.phase, E.x(E.GYRO_ROL, :), '.', 'MarkerSize', 1);
set(gca, 'XLim', [0 2*pi], 'XTick', [0:(pi/2):(2*pi)], 'XTickLabel', {'0', 'pi/2', 'pi', '3pi/2', '2pi'});


subplotij(1, 3, 1, 2);
plot(E.phase, E.x(E.GYRO_PIT, :), '.', 'MarkerSize', 1);
set(gca, 'XLim', [0 2*pi], 'XTick', [0:(pi/2):(2*pi)], 'XTickLabel', {'0', 'pi/2', 'pi', '3pi/2', '2pi'});

subplotij(1, 3, 1, 3);
plot(E.x(E.GYRO_PIT, :), E.x(E.GYRO_PIT_D, :), '.', 'MarkerSize', 1);
