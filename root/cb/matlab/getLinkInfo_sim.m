function links = getLinkInfo

  %link enumration
  BASE=0+1;

  L_SFE=1+1;
  L_SAA=2+1;
  L_HR=3+1;
  L_EB=4+1;
  L_WR=5+1;
  L_WFE=6+1;
  L_WAA=7+1;
  
  R_SFE=8+1;
  R_SAA=9+1;
  R_HR=10+1;
  R_EB=11+1;
  R_WR=12+1;
  R_WFE=13+1;
  R_WAA=14+1;

  L_HFE=15+1;
  L_HAA=16+1;
  L_HFR=17+1;
  L_KFE=18+1;
  L_AR=19+1;
  L_AFE=20+1;
  L_AAA=21+1;

  R_HFE=22+1;
  R_HAA=23+1;
  R_HFR=24+1;
  R_KFE=25+1;
  R_AR=26+1;
  R_AFE=27+1;
  R_AAA=28+1;

  B_TR=29+1;
  B_TAA=30+1;
  B_TFE=31+1;

  B_HN=32+1;
  B_HT=33+1;
  B_HR=34+1;

  R_EP=35+1;
  R_ET=36+1;

  L_EP=37+1;
  L_ET=38+1;

  N_DOFS=L_ET;

  
  Rx = @(x) [1 0 0; 0 cos(x) -sin(x); 0 sin(x) cos(x)];
  Ry = @(x) [cos(x) 0 sin(x); 0 1 0; -sin(x) 0 cos(x)];
  Rz = @(x) [cos(x) -sin(x) 0; sin(x) cos(x) 0; 0 0 1];
  
  R = @(x,y,z) Rx(x) * Ry(y) * Rz(z);


  %% base + torso %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

  links = cell(N_DOFS,1);
  
  %%BASE
  links{BASE}.name = 'BASE';
  links{BASE}.mass = 7.1448;
  links{BASE}.com = [-0.020963; -0.010211; 0.10435];
  links{BASE}.Iprinc = [0.030336; 0.059711; 0.067489];
  links{BASE}.Iaxes = [-0.23276 -0.97225 0.0233;
                      0.8948 -0.20471 0.39676;
  		      -0.38098 0.1132 0.91763]';
  
  links{BASE}.rotation = R(pi/2,0,-pi/2)';
  
  
  %%B_TR aka torso twist
  links{B_TR}.name = 'B_TR';
  links{B_TR}.mass = 1.9636;
  links{B_TR}.com = [-0.038256; -0.00053868; 0.040524];
  links{B_TR}.Iprinc = [0.0037806; 0.0063957; 0.0088097];
  links{B_TR}.Iaxes = [-0.81294 -0.018182 -0.58206;
                      -0.58223 0.044718 0.81179;
	    	    0.011269 0.99883 -0.046939]';
  
  links{B_TR}.rotation = R(0,0,0);
  
  
  
  %%B_TAA aka torso side to side
  links{B_TAA}.name = 'B_TAA';
  links{B_TAA}.mass = 1.6606;
  links{B_TAA}.com = [-0.039106; -0.017894; 0.02789];
  links{B_TAA}.Iprinc = [0.0036878; 0.0070159; 0.0081166];
  links{B_TAA}.Iaxes = [0.80077 0.081225 -0.59344;
                    0.33034 0.76658 0.55067;
                   0.49965 -0.63699 0.58702]';
  
  links{B_TAA}.rotation = R(pi,0,0);
  
  
  %%B_TFE aka torso forebend
  links{B_TFE}.name = 'B_TFE';
  %links{B_TFE}.mass = 4.9349;
  %links{B_TFE}.com = [-0.098077; 0.029154; 0.021864];
  %links{B_TFE}.Iprinc = [0.019639; 0.031538; 0.038312];
  %links{B_TFE}.Iaxes = [0.11613 -0.043839 -0.99227;
  %                  0.81862 0.56997 0.070625;
  %                 0.56247 -0.82049 0.10208]';
  links{B_TFE}.mass = 5.8388; %taken from 2nd page of T_FE
  links{B_TFE}.com = [-0.12941; 0.022945; 0.019092];
  links{B_TFE}.Iprinc = [0.033235; 0.056275; 0.073867];
  links{B_TFE}.Iaxes = [0.96763 0.24787 0.047402;
                    -0.064771 0.06239 0.99595;
                   0.24391 -0.96678 0.076426]';
  
  links{B_TFE}.rotation = R(pi,0,0);
  
  
  %% right arm %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  
  %%R_SFE aka Rarm forward
  links{R_SFE}.name = 'R_SFE';
  links{R_SFE}.mass = 1.717;
  links{R_SFE}.com = [-0.021781; -0.00053451; -0.16508];
  links{R_SFE}.Iprinc = [0.0019687; 0.0062238; 0.0076629];
  links{R_SFE}.Iaxes = [0.065974 -0.0011843 0.99775;
                    0.99782 0.0025389 -0.065948;
                   -0.0017522 0.99993 0.011984]';
  
  links{R_SFE}.rotation = R(pi,0,0);
  
  %%R_SAA aka Rarm out
  links{R_SAA}.name = 'R_SAA';
  links{R_SAA}.mass = 0.28695;
  links{R_SAA}.com = [-0.01168; 0.00886; 0.00134];
  links{R_SAA}.Iprinc = [0.00012; 0.00015; 0.00019];
  links{R_SAA}.Iaxes = [0.57527 -0.78268 0.23763;
                    -0.12734 0.20127 0.97122;
                   -0.80799 -0.58898 0.01612]';
  
  links{R_SAA}.rotation = R(pi,0,0);
  
  %%R_HR
  links{R_HR}.name = 'R_HR';
  links{R_HR}.mass = 3.0791;
  links{R_HR}.com = [-0.001955; 0.0058258; -0.14027];
  links{R_HR}.Iprinc = [0.0030301; 0.012141; 0.01232];
  links{R_HR}.Iaxes = [0.039977 0.03763 0.99849;
                    -0.049541 0.99814 -0.035633;
                   -0.99797 -0.048042 0.041767]';
  
  links{R_HR}.rotation = R(pi,0,0);
  
  %%R_EB
  links{R_EB}.name = 'R_EB';
  links{R_EB}.mass = 0.34623;
  links{R_EB}.com = [-0.00948; 0.01798; -0.00095];
  links{R_EB}.Iprinc = [0.00019; 0.00029; 0.00032];
  links{R_EB}.Iaxes = [-0.05366 -0.99709 -0.05413;
                    -0.11389 -0.04774 0.99235;
                   -0.99204 0.05941 -0.11100]';
  
  links{R_EB}.rotation = R(pi,0,0);
  
  
  %%R_WR
  links{R_WR}.name = 'R_WR';
  links{R_WR}.mass = 1.0582;
  links{R_WR}.com = [-0.0185; 0.00062671; -0.13967];
  links{R_WR}.Iprinc = [0.00073062; 0.0029283; 0.0030352];
  links{R_WR}.Iaxes = [0.28004 0.025693 0.95964;
                    -0.9576 -0.063002 0.28113;
                   0.067682 -0.99768 0.006961]';
  
  links{R_WR}.rotation = R(pi,0,0);
  
  %%R_WFE
  links{R_WFE}.name = 'R_WFE';
  links{R_WFE}.mass = 0.05659;
  links{R_WFE}.com = [-0.00058; 0.00782; -0.00875];
  links{R_WFE}.Iprinc = [0.00002; 0.00002; 0.00004];
  links{R_WFE}.Iaxes = [0.00731 -0.99296 -0.11825;
                        0.08759 -0.11717 0.98924;
                       -0.99613 -0.01759 0.08612]';

  links{R_WFE}.rotation = R(0,0,0);
  
  %%R_WAA
  links{R_WAA}.name = 'R_WAA';
  links{R_WAA}.mass = 0.27336;
  links{R_WAA}.com = [0.08565; 0.00857; -0.00413];
  links{R_WAA}.Iprinc = [0.00017; 0.00081; 0.00092];
  links{R_WAA}.Iaxes = [0.98956 0.04878 0.13561;
                    -0.09612 0.92451 0.36885;
                   -0.10738 -0.37803 0.91954]';
  
  links{R_WAA}.rotation = R(pi,0,0);

  %% left arm %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

  %%L_SFE
  links{L_SFE} = mirror(links{R_SFE},3);
  links{L_SFE}.name = 'L_SFE';
  links{L_SFE}.rotation = R(pi,0,0);
  
  %%L_SAA
  links{L_SAA} = mirror(links{R_SAA},1);
  links{L_SAA}.name = 'L_SAA';
  links{L_SAA}.rotation = R(0,0,pi);

  %%L_HR  
  links{L_HR} = mirror(links{R_HR},1);
  links{L_HR}.name = 'L_HR';
  links{L_HR}.rotation = R(0,0,pi);
  
  %%L_EB
  links{L_EB} = mirror(links{R_EB},3);
  links{L_EB}.name = 'L_EB';
  links{L_EB}.rotation = R(pi,0,0);

  %%L_WR  
  links{L_WR} = mirror(links{R_WR},2);
  links{L_WR}.name = 'L_WR';
  links{L_WR}.rotation = R(0,0,0);

  %%L_WFE  
  links{L_WFE} = mirror(links{R_WFE},2);
  links{L_WFE}.name = 'L_WFE';
  links{L_WFE}.rotation = R(pi,0,0);

  %%L_WAA  
  links{L_WAA} = mirror(links{R_WAA},3);
  links{L_WAA}.name = 'L_WAA';
  links{L_WAA}.rotation = R(pi,0,0);
  
  
  %% right leg %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  
  %%R_AAA
  links{R_AAA}.name = 'R_AAA';
  links{R_AAA}.mass = 1.694;
  links{R_AAA}.com = [0.0361; -0.00893; 0.03896];
  links{R_AAA}.Iprinc = [0.00126; 0.00673; 0.007368];
  links{R_AAA}.Iaxes = [0.05863 0.0003029 -0.9983;
                    0.04659 -0.9989 0.002434;
                   -0.9972 -0.04666 -0.05858]';
  
  links{R_AAA}.rotation = R(0,0,0);
  
  %%R_AFE
  links{R_AFE}.name = 'R_AFE';
  links{R_AFE}.mass = 0.3412;
  links{R_AFE}.com = [4.154e-5; 0.02237; 1.629e-5];
  links{R_AFE}.Iprinc = [0.0001084; 0.0004823; 0.0005304];
  links{R_AFE}.Iaxes = [-0.001274 -1 0.004783;
                    -0.004119 0.004788 1;
                   -1 0.001254 0.004125]';
  
  links{R_AFE}.rotation = R(0,0,0);
  
  
  %%R_AR
  links{R_AR}.name = 'R_AR';
  links{R_AR}.mass = 3.469;
  links{R_AR}.com = [-0.01614; -0.02749; 0.2131];
  links{R_AR}.Iprinc = [0.006918; 0.01879; 0.02159];
  links{R_AR}.Iaxes = [0.05559 -0.02948 -0.998;
                    0.9847 -0.1636 0.05968;
                   -0.165 -0.9861 0.01993]';
  
  links{R_AR}.rotation = R(0,0,0);
  
  %%R_KFE
  links{R_KFE}.name = 'R_KFE';
  links{R_KFE}.mass = 1.391;
  links{R_KFE}.com = [-0.01476; 0.0489; 0.002195];
  links{R_KFE}.Iprinc = [0.001488; 0.01054; 0.01088];
  links{R_KFE}.Iaxes = [-0.06559 -0.9978 -0.01249;
                    0.9787 -0.06188 -0.1956;
                   0.1944 -0.02505 0.9806]';
  
  links{R_KFE}.rotation = R(pi,0,0);
  
  
  %%R_HFR
  links{R_HFR}.name = 'R_HFR';
  links{R_HFR}.mass = 2.487;
  links{R_HFR}.com = [0.03339; -0.008458; 0.2624];
  links{R_HFR}.Iprinc = [0.003909; 0.02677; 0.02767];
  links{R_HFR}.Iaxes = [-0.100 -0.07856 -0.9919;
                    0.8433 -0.5358 -0.0426;
                   -0.5281 -0.8407 0.1198]';
  
  links{R_HFR}.rotation = R(0,0,0);
 
  
  %%R_HFE
  links{R_HFE}.name = 'R_HFE';
  links{R_HFE}.mass = 3.189;
  links{R_HFE}.com = [0.009701; 0.1275; 0.01708];
  links{R_HFE}.Iprinc = [0.004713; 0.03663; 0.03798];
  links{R_HFE}.Iaxes = [-0.05852 -0.9925 -0.1074;
                    0.9951 -0.0494 -0.08569;
                   0.07975 -0.1119 0.9905]';
  
  links{R_HFE}.rotation = R(0,0,0);
  
  %%R_HAA
  links{R_HAA}.name = 'R_HAA';
  links{R_HAA}.mass = 1.584;
  links{R_HAA}.com = [-0.009839; 0.001949; 0.06551];
  links{R_HAA}.Iprinc = [0.002983; 0.005758; 0.006174];
  links{R_HAA}.Iaxes = [0.009685 0.07897 0.9968;
                    -0.08551 0.9933 -0.07786;
                   -0.9963 -0.08448 0.01637]';
  
  links{R_HAA}.rotation = R(pi,0,0);

  %% left leg %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  links{L_AAA} = mirror(links{R_AAA},2);
  links{L_AAA}.name = 'L_AAA';
  links{L_AAA}.rotation = R(pi,0,0);
  
  links{L_AFE} = mirror(links{R_AFE},3);
  links{L_AFE}.name = 'L_AFE';
  links{L_AFE}.rotation = R(0,0,0);
  
  links{L_AR} = mirror(links{R_AR},2);
  links{L_AR}.name = 'L_AR';
  links{L_AR}.rotation = R(pi,0,0);
  
  links{L_KFE} = mirror(links{R_KFE},3);
  links{L_KFE}.name = 'L_KFE';
  links{L_KFE}.rotation = R(pi,0,0);
  
  links{L_HFR} = mirror(links{R_HFR},2);
  links{L_HFR}.name = 'L_HFR';
  links{L_HFR}.rotation = R(pi,0,0);
  
  links{L_HFE} = mirror(links{R_HFE},3);
  links{L_HFE}.name = 'L_HFE';
  links{L_HFE}.rotation = R(0,0,0);
  
  links{L_HAA} = mirror(links{R_HAA},2);
  links{L_HAA}.name = 'L_HAA';
  links{L_HAA}.rotation = R(0,0,0);

  
  %% head + eyes %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  
  %%B_HN (is also B_HR since they are linear joints)
  links{B_HN}.name = 'B_HN';
  head_mass = 1.062;
  head_Iprinc = [0.0007966; 0.006945; 0.007236];

  links{B_HN}.mass = head_mass/2;
  links{B_HN}.com = [0.05383; 0.02121; -0.0004665];
  links{B_HN}.Iprinc = head_Iprinc/2;
  links{B_HN}.Iaxes = [-0.9687 -0.2482 -0.002922;
                    -0.002774 -0.0009432 1;
                   -0.2482 0.9687 0.0002252]';
  
  links{B_HN}.rotation = R(pi,0,-pi/2);
  
  
  
  links{B_HT}.name = 'B_HT';
  links{B_HT}.mass = head_mass/2;
  links{B_HT}.com = [0.05383; -0.0004582; -0.02121];
  links{B_HT}.Iprinc = head_Iprinc/2;
  links{B_HT}.Iaxes = [-0.9687 -0.003019 0.2482;
                    -0.002774 1 0.001335;
                   -0.2482 0.0006043 -0.9687]';
  
  links{B_HT}.rotation = R(pi,0,-pi/2);
  
  
  %%B_HR
  links{B_HR}.name = 'B_HR';
  links{B_HR}.mass = 2.736;
  links{B_HR}.com = [0.003315; 0.0106; -0.04615];
  links{B_HR}.Iprinc = [0.005719; 0.03156; 0.03319];
  links{B_HR}.Iaxes = [-0.04346 -0.1839 -0.982;
                    0.9967 0.05938 -0.05523;
                   0.06847 -0.9811 0.1807]';
  
  links{B_HR}.rotation = R(0,0,0);
  
  %%R_EP
  links{R_EP}.name = 'R_EP';
  links{R_EP}.mass = 0.1513;
  links{R_EP}.com = [-0.0009938; -0.0003683; 0.01627];
  links{R_EP}.Iprinc = [4.647e-4; 0.0001299; 0.0001344];
  links{R_EP}.Iaxes = [-0.01854 0.07361 -0.9971;
                    -0.1374 0.9876 0.07547;
                   0.9903 0.1384 -0.008198]';
  
  links{R_EP}.rotation = R(0,0,-pi/2);
  
  
  %%L_EP
  links{L_EP}.name = 'L_EP';
  links{L_EP}.mass = 0.1559;
  links{L_EP}.com = [0.0001234; 0.001027; 0.016];
  links{L_EP}.Iprinc = [4.796e-4; 0.0001351; 0.0001405];
  links{L_EP}.Iaxes = [-0.06364 0.01016 -0.9979;
                    0.9847 -0.1622 -0.06445;
                   -0.1625 -0.9867 0.0003207]';
  
  links{L_EP}.rotation = R(0,0,0);
  
  %%R_ET %%TO CHECK
  links{R_ET}.name = 'R_ET';
  links{R_ET}.mass = 0.1099;
  links{R_ET}.com = [-0.003789; 0.00389; 0.0002565];
  links{R_ET}.Iprinc = [3.415e-4; 6.098e-4; 6.217e-4];
  links{R_ET}.Iaxes = [0.889 -0.4571 0.02659;
                    0.2939 0.5252 -0.7986;
                   0.3511 0.7178 0.6013]';
  
  links{R_ET}.rotation = R(pi,0,pi/2);
  
  %%L_ET %%TO CHECK
  links{L_ET}.name = 'L_ET';
  links{L_ET}.mass = 0.1115;
  links{L_ET}.com = [-0.004018; 0.003725; -0.0004169];
  links{L_ET}.Iprinc = [3.508e-4; 6.26e-4; 6.418e-4];
  links{L_ET}.Iaxes = [0.8976 -0.4398 -0.02872;
                    -0.3153 -0.5954 -0.739;
                   0.3079 0.6724 -0.6731]';
  
  links{L_ET}.rotation = R(pi,0,pi/2);
  


  
function link_des = mirror(link, coord)
  
  link_des = link;
  
  link_des.com(coord) = -link.com(coord);
  link_des.Iaxes(3,:) = -link.Iaxes(3,:);
  
