clc
clear all
close all
n = input("number of elements in an array: ");
d1 = input("distance between two elements: ");
alpha = input("enter the phase difference: ");
lam = 1/2;
d = d1*lam;
phi = 0 : 0.01 : 2*pi
psi = (2*pi/lam)*d*cos(phi) - (2*pi/lam)*d; %end fire array
%psi = (2*pi/lam)*d*cos(phi) %broadside array
num = sin(n*psi/2)
den = sin(psi/2)
E = abs(num./den)
deg = phi*180/pi
subplot(1,2,1)
polar(phi,E)
subplot(1,2,2)
plot(deg, E)
