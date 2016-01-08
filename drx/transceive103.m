function [dr,ns] = transceive103(d2s,ft)
persistent hrx htx; 
dr = complex(zeros(1408,1));
ns = uint32(0);
if isempty(htx)
    htx = comm.SDRuTransmitter('CenterFrequency',1.285e9,'Gain',15, ...
        'InterpolationFactor',500,'IPAddress','192.168.10.3', ...
        'LocalOscillatorOffset',0); %1.255e9
end
if isempty(hrx)
    hrx = comm.SDRuReceiver('CenterFrequency',1.285e9, ...
        'DecimationFactor',500,'FrameLength',1408,'Gain',25, ...
        'IPAddress','192.168.10.3','OutputDataType','double', ...
        'SampleRate',2e5);
end
if (ft)
    release(hrx);
    release(htx);
else
    step(htx,d2s);
    while (ns < uint32(1))
        [dr,ns] = step(hrx); 
    end    
end
return;
end