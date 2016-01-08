MATLAB="/usr/local/MATLAB/R2015b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ram/.matlab/R2015b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for rffe_50" > rffe_50_mex.mki
echo "CC=$CC" >> rffe_50_mex.mki
echo "CFLAGS=$CFLAGS" >> rffe_50_mex.mki
echo "CLIBS=$CLIBS" >> rffe_50_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> rffe_50_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> rffe_50_mex.mki
echo "CXX=$CXX" >> rffe_50_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> rffe_50_mex.mki
echo "CXXLIBS=$CXXLIBS" >> rffe_50_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> rffe_50_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> rffe_50_mex.mki
echo "LD=$LD" >> rffe_50_mex.mki
echo "LDFLAGS=$LDFLAGS" >> rffe_50_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> rffe_50_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> rffe_50_mex.mki
echo "Arch=$Arch" >> rffe_50_mex.mki
echo OMPFLAGS=-fopenmp -DOMPLIBNAME='"\"/usr/local/MATLAB/R2015b/sys/os/glnxa64/libiomp5.so\""' >> rffe_50_mex.mki
echo OMPLINKFLAGS=-fPIC -L/usr/local/MATLAB/R2015b/sys/os/glnxa64 -liomp5 >> rffe_50_mex.mki
echo "EMC_COMPILER=gcc" >> rffe_50_mex.mki
echo "EMC_CONFIG=optim" >> rffe_50_mex.mki
"/usr/local/MATLAB/R2015b/bin/glnxa64/gmake" -B -f rffe_50_mex.mk
