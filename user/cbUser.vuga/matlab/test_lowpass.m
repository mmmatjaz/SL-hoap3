dt = 0.004;
S = 1000;

u = zeros(1, S);
dist_freq = 50.0;
rho = exp(-dt*dist_freq);
for s = 2:S
  u(s) =  randn*1/180*pi*dt + rho*u(s - 1) - 0.0*u(s - 1);
end

figure(1); clf
plot(dt.*[1:S], u);