N = input ('enter the size of sequence= ');
t = -N:N;
l = length(t);
for ii = 1:l;
    if t(ii)>=0
        seq(ii)=t(ii);
    else
        seq(ii)=0;
    end;
end;
stem(t,seq);
xlabel('n');
ylabel('Amplitude');
