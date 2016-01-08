MATLAB="/usr/local/MATLAB/R2015b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ram/.matlab/R2015b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for rffe_25" > rffe_25_mex.mki
echo "CC=$CC" >> rffe_25_mex.mki
echo "CFLAGS=$CFLAGS" >> rffe_25_mex.mki
echo "CLIBS=$CLIBS" >> rffe_25_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> rffe_25_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> rffe_25_mex.mki
echo "CXX=$CXX" >> rffe_25_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> rffe_25_mex.mki
echo "CXXLIBS=$CXXLIBS" >> rffe_25_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> rffe_25_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> rffe_25_mex.mki
echo "LD=$LD" >> rffe_25_mex.mki
echo "LDFLAGS=$LDFLAGS" >> rffe_25_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> rffe_25_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> rffe_25_mex.mki
echo "Arch=$Arch" >> rffe_25_mex.mki
echo OMPFLAGS=-fopenmp -DOMPLIBNAME='"\"/usr/local/MATLAB/R2015b/sys/os/glnxa64/libiomp5.so\""' >> rffe_25_mex.mki
echo OMPLINKFLAGS=-fPIC -L/usr/local/MATLAB/R2015b/sys/os/glnxa64 -liomp5 >> rffe_25_mex.mki
echo "EMC_COMPILER=gcc" >> rffe_25_mex.mki
echo "EMC_CONFIG=optim" >> rffe_25_mex.mki
"/usr/local/MATLAB/R2015b/bin/glnxa64/gmake" -B -f rffe_25_mex.mk
