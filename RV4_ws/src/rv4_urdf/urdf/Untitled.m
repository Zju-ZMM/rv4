%导入机器人
clear
clc
robot=importrobot('rv4_urdf.urdf');
show(robot);
zlim([ 0,1 ]); 
urdfModel = '3.SLDASM.urdf';
% urdfModel = 'sm_humanoid.urdf';
smimport(urdfModel);