function link = computeLinkInfo(name, mass, com, Iprinc, Iaxes, rotation, vis)
  
%%%this function computes the SL compliant inertial parameters that
%will go in Links.cf
%%%
% name is the name of the joint
% mass its mass,
% com the position of the center of mass relative to the SL coordinate frame
% I is the inertial tensor taken at the coordinate frame defined by
% sarcos (i.e. SL frame + a rotation)
% rot_euler are euler angles that define the rotation between sarcos
% frame and SL frame
% 
% the function returns link.m, link.mcm, link.I and link.vis
  
  fprintf('------------%s------------\n',name);
  
% $$$   Rx = [1 0 0; 
% $$$         0 cos(rot_euler(1)) -sin(rot_euler(1));
% $$$         0 sin(rot_euler(1)) cos(rot_euler(1))];
% $$$   
% $$$   Ry = [cos(rot_euler(2)) 0 sin(rot_euler(2));
% $$$         0 1 0;
% $$$         -sin(rot_euler(2)) 0 cos(rot_euler(2))];
% $$$   
% $$$   Rz = [cos(rot_euler(3)) -sin(rot_euler(3)) 0;
% $$$         sin(rot_euler(3)) cos(rot_euler(3)) 0;
% $$$         0 0 1];
  
  R = rotation;
  
  %%we compute the inertia tensor relative to the sarcos joint frame
  %first we rotate the inertia tensor to align it with sarcos
  Isarcos = Iaxes * diag(Iprinc) * Iaxes'
  
  %then we move it to the sarcos frame using the parallel axis theorem
  Isarcos_par = Isarcos + mass * (com'*com*eye(3) - com*com')
  
  %%we rotate the Inertia matrix to be in the SL frame
  Isl = R * Isarcos_par * R'
  
  %%we rotate the center of mass to be relative to the SL frame
  com = R' * com;
  
  mcm = com * mass
  
  link.name = name;
  link.m = mass;
  link.mcm = mcm;
  link.I = [Isl(1,1) Isl(1,2) Isl(1,3) Isl(2,2) Isl(2,3) Isl(3,3)];
  link.vis = vis;