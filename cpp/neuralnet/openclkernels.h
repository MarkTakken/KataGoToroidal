#ifndef NEURALNET_OPENCL_KERNELS_H
#define NEURALNET_OPENCL_KERNELS_H

#include "../core/global.h"

namespace OpenCLKernels {
  extern std::string fp16StorageDefine;
  extern std::string fp16ComputeDefine;

  extern std::string common;
  extern std::string conv2dNCHWPlanar;
  extern std::string conv2dNCHWToroidal;
  extern std::string conv2dNCHWKlein;
  //extern std::string conv2dNCHW;
  extern std::string winogradTransformNCHWPlanar;
  extern std::string winogradTransformNCHWToroidal;
  extern std::string winogradTransformNCHWKlein;
  //extern std::string winogradTransformNCHW;
  extern std::string winogradBNReluTransformNCHWPlanar;
  extern std::string winogradBNReluTransformNCHWToroidal;
  extern std::string winogradBNReluTransformNCHWKlein;
  //extern std::string winogradBNReluTransformNCHW;
  extern std::string winogradUntransformNCHW;
  extern std::string scaleBiasMaskNCHW;
  extern std::string scaleBiasMaskReluNCHW;
  extern std::string addPointWise;
  extern std::string matMul;
  extern std::string matMulTransBatched;
  extern std::string sumChannelsNCHW;
  extern std::string gPoolChannelsNCHW;
  extern std::string valueHeadPoolChannelsNCHW;
  extern std::string addChannelBiasesNCHW;
  extern std::string addCBiasesNC;
  extern std::string addCBiasesNCRelu;
  extern std::string extractChannel0NCHW;

  extern std::string xgemmDirect;
  extern std::string xgemm;
  extern std::string hgemmWmma;
}





#endif //NEURALNET_OPENCL_KERNELS_H
