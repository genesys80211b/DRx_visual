function showData_old( choice, nib, rib )
%showData Displays received data stream
%   Depending on 'choice,' displays binary stream or received image

switch choice

	% Choice 1, random stream of binary of length l
	case 1
		fprintf(1,'Displaying %d bits Received. Exiting... \n',nib);
        display(rib);
	

	% Choice 2, binary stream from fixed .jpg
	case 2
        % If all image bits received, display message and recovered image
        fprintf(1,'Full Image of %d bits Received. Exiting... \n',nib);
        if 1%(ri3 == 1)
            rid = bi2gim(rib,nib);
            figure(128);
            imshow(rid);
        end

end

end

