function [C] = nyquistChannelCap(B, M)
% Nyquist channel capacity formula for idealized signal
% C is Capacity in bits/second (bps)
% B is frequency bandwidth in Hertz (Hz)
% M is the number of levels a single symbol can have (BPSK = 2)
C = 2*B*log2(M);
end