function cum_cost(pid_list)


L = length(pid_list);

dt = 0.02;

c = [];
for l = 1:L
  pid = pid_list(l);
  E = load_trace(pid);
  
  t_idx = find(1 < E.t & E.t < (max(E.t) - 1));
  state_idx = [E.GYRO_ROL E.GYRO_PIT];
  tmp = sum(sum(E.x(state_idx, t_idx).^2))*dt;
  deno = E.t(t_idx(end)) - E.t(t_idx(1))
  c = [c tmp/deno];
end

c