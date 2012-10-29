function E = load_trace(pid)

fname = ['../log/' itoa(pid, 6) '.dat'];
pf = fopen(fname, 'r','ieee-le.l64');
ij = fscanf(pf, '%d %d', 2);
E.state_dim = fscanf(pf, '%d', 1);
E.action_dim = fscanf(pf, '%d', 1);
E.module_num = fscanf(pf, '%d', 1);
E.dt = fscanf(pf, '%f\n', 1);

d = fread(pf, [ij(1), ij(2)], 'double')';
E.trial = d(:, 1);
E.step = d(:, 2);
E.t = d(:, 3)';
E.phase = d(:, 4)';
b = 5;
E.x = d(:, b:(b + E.state_dim - 1))';
b = b + E.state_dim;
E.u0 = d(:, b:(b + E.action_dim - 1))';
b = b + E.action_dim;
E.add_u = d(:, b:(b + E.action_dim - 1))';
b = b + E.action_dim;
E.lambda = d(:, b:(b + E.module_num - 1))';
b = b + E.module_num;
E.pred_err = d(:, b:(b + E.module_num - 1))';
b = b + E.module_num;
for m = 1:E.module_num
  E.kal_xh{m} = d(:, b:(b + E.state_dim - 1))';
  b = b + E.state_dim;
end
E.u = E.u0 + E.add_u;

if E.state_dim == 2*(2 + 14)
  E.GYRO_ROL = 1; E.GYRO_PIT = 2;
  E.L_HFE =  3; E.L_HAA =  4; E.L_HFR =  5; E.L_KFE =  6; E.L_AR  =  7; E.L_AFE =  8; E.L_AAA =  9;
  E.R_HFE = 10; E.R_HAA = 11; E.R_HFR = 12; E.R_KFE = 13; E.R_AR  = 14; E.R_AFE = 15; E.R_AAA = 16;
  E.GYRO_ROL_D = 17; E.GYRO_PIT_D = 18;
  E.L_HFE_D = 19; E.L_HAA_D = 20; E.L_HFR_D = 21; E.L_KFE_D = 22; E.L_AR_D = 23; E.L_AFE_D = 24; E.L_AAA_D = 25;
  E.R_HFE_D = 26; E.R_HAA_D = 27; E.R_HFR_D = 28; E.R_KFE_D = 29; E.R_AR_D = 30; E.R_AFE_D = 31; E.R_AAA_D = 32;
  E.label_state = {'GYRO_ROL', 'GYRO_PIT', ...
		   'L_HFE', 'L_HAA', 'L_HFR', 'L_KFE', 'L_AR', 'L_AFE', 'L_AAA', ...
		   'R_HFE', 'R_HAA', 'R_HFR', 'R_KFE', 'R_AR', 'R_AFE', 'R_AAA', ...
		   'GYRO_ROL_D', 'GYRO_PIT_D', ...
		   'L_HFE_D', 'L_HAA_D', 'L_HFR_D', 'L_KFE_D', 'L_AR_D', 'L_AFE_D', 'L_AAA_D', ...
		   'R_HFE_D', 'R_HAA_D', 'R_HFR_D', 'R_KFE_D', 'R_AR_D', 'R_AFE_D', 'R_AAA_D'};
  E.L_HFE_A =  1; E.L_HAA_A =  2; E.L_HFR_A =  3; E.L_KFE_A =  4; E.L_AR_A =  5; E.L_AFE_A =  6; E.L_AAA_A =  7;
  E.R_HFE_A =  8; E.R_HAA_A =  9; E.R_HFR_A = 10; E.R_KFE_A = 11; E.R_AR_A = 12; E.R_AFE_A = 13; E.R_AAA_A = 14;
  E.idx_isuse = [E.L_AFE_A E.L_AAA_A E.R_AFE_A E.R_AAA_A];
  E.label_isuse = {'L_AFE', 'L_AAA', 'R_AFE', 'R_AAA'};
  E.label_action = {'L_HFE', 'L_HAA', 'L_HFR', 'L_KFE', 'L_AR', 'L_AFE', 'L_AAA', ...
		    'R_HFE', 'R_HAA', 'R_HFR', 'R_KFE', 'R_AR', 'R_AFE', 'R_AAA'};

elseif E.state_dim == 2*(2 + 2 + 2*7)
  E.GYRO_ROL = 1; E.GYRO_PIT = 2;
  %E.L_FF = 3; E.R_FF = 4;
  E.B_TFE =  3; E.B_TAA =  4;
  E.L_HFE =  5; E.L_HAA =  6; E.L_HFR =  7; E.L_KFE =  8; E.L_AR  =  9; E.L_AFE = 10; E.L_AAA = 11;
  E.R_HFE = 12; E.R_HAA = 13; E.R_HFR = 14; E.R_KFE = 15; E.R_AR  = 16; E.R_AFE = 17; E.R_AAA = 18;
  E.GYRO_ROL_D = 19; E.GYRO_PIT_D = 20;
  %E.L_FF_D = 21; E.R_FF_D = 22;
  E.B_TFE_D = 21; E.B_TAA_D = 22;
  E.L_HFE_D = 23; E.L_HAA_D = 24; E.L_HFR_D = 25; E.L_KFE_D = 26; E.L_AR_D = 27; E.L_AFE_D = 28; E.L_AAA_D = 29;
  E.R_HFE_D = 30; E.R_HAA_D = 31; E.R_HFR_D = 32; E.R_KFE_D = 33; E.R_AR_D = 34; E.R_AFE_D = 35; E.R_AAA_D = 36;
  E.label_state = {'GYRO_ROL', 'GYRO_PIT', ... %'L_FF', 'R_FF', ...
		   'B_TFE', 'B_TAA', ...
		   'L_HFE', 'L_HAA', 'L_HFR', 'L_KFE', 'L_AR', 'L_AFE', 'L_AAA', ...
		   'R_HFE', 'R_HAA', 'R_HFR', 'R_KFE', 'R_AR', 'R_AFE', 'R_AAA', ...
		   'GYRO_ROL_D', 'GYRO_PIT_D', ... %'L_FF_D', 'R_FF_D', ...
		   'B_TFE_D', 'B_TAA_D', ...
		   'L_HFE_D', 'L_HAA_D', 'L_HFR_D', 'L_KFE_D', 'L_AR_D', 'L_AFE_D', 'L_AAA_D', ...
		   'R_HFE_D', 'R_HAA_D', 'R_HFR_D', 'R_KFE_D', 'R_AR_D', 'R_AFE_D', 'R_AAA_D'};
  E.B_TFE_A =  1; E.B_TAA_A =  2;
  E.L_HFE_A =  3; E.L_HAA_A =  4; E.L_HFR_A =  5; E.L_KFE_A =  6; E.L_AR_A =  7; E.L_AFE_A =  8; E.L_AAA_A =  9;
  E.R_HFE_A = 10; E.R_HAA_A = 11; E.R_HFR_A = 12; E.R_KFE_A = 13; E.R_AR_A = 14; E.R_AFE_A = 15; E.R_AAA_A = 16;
  E.idx_isuse = [E.B_TFE_A E.B_TAA_A E.L_AFE_A E.L_AAA_A E.R_AFE_A E.R_AAA_A];
  E.label_isuse = {'B_TFE', 'B_TAA', 'L_AFE', 'L_AAA', 'R_AFE', 'R_AAA'};
  E.label_action = {'B_TFE', 'B_TAA', ...
		    'L_HFE', 'L_HAA', 'L_HFR', 'L_KFE', 'L_AR', 'L_AFE', 'L_AAA', ...
		    'R_HFE', 'R_HAA', 'R_HFR', 'R_KFE', 'R_AR', 'R_AFE', 'R_AAA'};
elseif E.state_dim == 2*(2 + 2*7 + 2 + 2*7)
  E.GYRO_ROL = 1; E.GYRO_PIT = 2;
  E.L_SFE =  3; E.L_SAA =  4; E.L_HR =  5; E.L_EB =  6; E.L_WR =  7; E.L_WFE =  8; E.L_WAA =  9;
  E.R_SFE = 10; E.R_SAA = 11; E.R_HR = 12; E.R_EB = 13; E.R_WR = 14; E.R_WFE = 15; E.R_WAA = 16;
  E.B_TFE = 17; E.B_TAA = 18;
  E.L_HFE = 19; E.L_HAA = 20; E.L_HFR = 21; E.L_KFE = 22; E.L_AR  = 23; E.L_AFE = 24; E.L_AAA = 25;
  E.R_HFE = 26; E.R_HAA = 27; E.R_HFR = 28; E.R_KFE = 29; E.R_AR  = 30; E.R_AFE = 31; E.R_AAA = 32;
  E.GYRO_ROL_D = 33; E.GYRO_PIT_D = 34;
  E.L_SFE_D = 35; E.L_SAA_D = 36; E.L_HR_D = 37; E.L_EB_D = 38; E.L_WR_D = 39; E.L_WFE_D = 40; E.L_WAA_D = 41;
  E.R_SFE_D = 42; E.R_SAA_D = 43; E.R_HR_D = 44; E.R_EB_D = 45; E.R_WR_D = 46; E.R_WFE_D = 47; E.R_WAA_D = 48;
  E.B_TFE_D = 49; E.B_TAA_D = 50;
  E.L_HFE_D = 51; E.L_HAA_D = 52; E.L_HFR_D = 53; E.L_KFE_D = 54; E.L_AR_D = 55; E.L_AFE_D = 56; E.L_AAA_D = 57;
  E.R_HFE_D = 58; E.R_HAA_D = 59; E.R_HFR_D = 60; E.R_KFE_D = 61; E.R_AR_D = 62; E.R_AFE_D = 63; E.R_AAA_D = 64;
  E.label_state = {'GYRO_ROL', 'GYRO_PIT', ...
		   'L_SFE', 'L_SAA', 'L_HR', 'L_EB', 'L_WR', 'L_WFE', 'L_WAA', ...
		   'R_SFE', 'R_SAA', 'R_HR', 'R_EB', 'R_WR', 'R_WFE', 'R_WAA', ...
		   'B_TFE', 'B_TAA', ...
		   'L_HFE', 'L_HAA', 'L_HFR', 'L_KFE', 'L_AR', 'L_AFE', 'L_AAA', ...
		   'R_HFE', 'R_HAA', 'R_HFR', 'R_KFE', 'R_AR', 'R_AFE', 'R_AAA', ...
		   'GYRO_ROL_D', 'GYRO_PIT_D', ...
		   'L_SFE_D', 'L_SAA_D', 'L_HR_D', 'L_EB_D', 'L_WR_D', 'L_WFE_D', 'L_WAA_D', ...
		   'R_SFE_D', 'R_SAA_D', 'R_HR_D', 'R_EB_D', 'R_WR_D', 'R_WFE_D', 'R_WAA_D', ...
		   'B_TFE_D', 'B_TAA_D', ...
		   'L_HFE_D', 'L_HAA_D', 'L_HFR_D', 'L_KFE_D', 'L_AR_D', 'L_AFE_D', 'L_AAA_D', ...
		   'R_HFE_D', 'R_HAA_D', 'R_HFR_D', 'R_KFE_D', 'R_AR_D', 'R_AFE_D', 'R_AAA_D'};
  E.L_SFE_A =  1; E.L_SAA_A =  2; E.L_HR_A =  3; E.L_EB_A =  4; E.L_WR_A =  5; E.L_WFE_A =  6; E.L_WAA_A =  7;
  E.R_SFE_A =  8; E.R_SAA_A =  9; E.R_HR_A = 10; E.R_EB_A = 11; E.R_WR_A = 12; E.R_WFE_A = 13; E.R_WAA_A = 14;
  E.B_TFE_A = 15; E.B_TAA_A = 16;
  E.L_HFE_A = 17; E.L_HAA_A = 18; E.L_HFR_A = 19; E.L_KFE_A = 20; E.L_AR_A = 21; E.L_AFE_A = 22; E.L_AAA_A = 23;
  E.R_HFE_A = 24; E.R_HAA_A = 25; E.R_HFR_A = 26; E.R_KFE_A = 27; E.R_AR_A = 28; E.R_AFE_A = 29; E.R_AAA_A = 30;
  E.idx_isuse = [E.L_SFE_A E.L_SAA_A E.R_SFE_A E.R_SAA_A ...
		 E.B_TFE_A E.B_TAA_A ...
		 E.L_AFE_A E.L_AAA_A E.R_AFE_A E.R_AAA_A];
  E.label_isuse = {'B_TFE', 'B_TAA', 'L_AFE', 'L_AAA', 'R_AFE', 'R_AAA'};
  E.label_action = {'L_SFE', 'L_SAA', 'L_HR', 'L_EB', 'L_WR', 'L_WFE', 'L_WAA', ...
		    'R_SFE', 'R_SAA', 'R_HR', 'R_EB', 'R_WR', 'R_WFE', 'R_WAA', ...
		    'B_TFE', 'B_TAA', ...
		    'L_HFE', 'L_HAA', 'L_HFR', 'L_KFE', 'L_AR', 'L_AFE', 'L_AAA', ...
		    'R_HFE', 'R_HAA', 'R_HFR', 'R_KFE', 'R_AR', 'R_AFE', 'R_AAA'};
end
return

figure(5); clf
for n = 1:E.state_dim
  set(0, 'CurrentFigure', 5); clf
  plot(E.t, E.x(n, :)); hold on;
  title(int2str(n));
  pause
end
return
