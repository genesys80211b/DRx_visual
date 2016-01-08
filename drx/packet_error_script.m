% running v40_drx multiple times incase of underflow error
% runs: initialized to zero, counter for infinite loop
runs = 0;
diary('3nodes_1meter_allgains.m')
fix(clock)

while 1
    v40_drx
end