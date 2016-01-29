function [index, addressIndex, nib, nmb, npb, nsq, nrb, rbs, rms, ril] = addTxIp( addressTx, addressIndex, nib, nmb, npb, nsq, nrb, rbs, rms, ril)
%addTxIp Adds a new cell for storing received packets per new Tx IP address
%   Inputs the new addressTx and previous cell arrays
%   Outputs current index and modified cell arrays and updated addressIndex array

persistent sizeAddressIndex;
if isempty(sizeAddressIndex),    sizeAddressIndex = length(addressIndex);                 end

%first check if this is a new address
index = find(addressIndex==addressTx);

%if addressTx is not found, generate a new cell for this new TxIp
if isempty(index)
    
    %+1 to sizeAddressIndex
    sizeAddressIndex=sizeAddressIndex+1;
    
    %add new addressTx to addressIndex
    addressIndex(sizeAddressIndex,1) = addressTx;
    
    %Initialize new cell for each data array
    %generate new nib cell
    nib{sizeAddressIndex,1} = uint64(0);
    %generate new nmb cell
    nmb{sizeAddressIndex,1} = uint16(0);    
    %generate new npb cell
    npb{sizeAddressIndex,1} = uint16(0);
    %generate new nsq cell
    nsq{sizeAddressIndex,1} = uint16(0);
    %generate new nrb cell
    nrb{sizeAddressIndex,1} = uint16(0); 
    %generate new rbs cell
    rbs{sizeAddressIndex,1} = zeros(64,1); 
    %generate new rms cell
    rms{sizeAddressIndex,1} = zeros(numMpduBits+numSuperBits,1);
    %generate new ril cell
    ril{sizeAddressIndex,1} = uint64(0);
    
    %index = current new sizeAddressIndex
    index = sizeAddressIndex;
    return
    
%else just return the index    
else
    return

end %index if END



