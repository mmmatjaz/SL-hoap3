function test_sin

dt = 0.01;
p = 2;
t = 0:dt:(p*1);

x = cos(2*pi/p*t);
y = cos(2*pi/p*t*4);
z = sin(2*pi/p*t*2);

figure(1); clf
plot3(x, y, z);
xlabel('x');
ylabel('y');
zlabel('z');