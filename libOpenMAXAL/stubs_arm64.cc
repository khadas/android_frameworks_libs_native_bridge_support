// clang-format off
#include "native_bridge_support/vdso/interceptable_functions.h"

DEFINE_INTERCEPTABLE_STUB_FUNCTION(xaCreateEngine);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(xaQueryNumSupportedEngineInterfaces);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(xaQuerySupportedEngineInterfaces);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_ANDROIDBUFFERQUEUESOURCE);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_AUDIODECODERCAPABILITIES);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_AUDIOENCODER);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_AUDIOENCODERCAPABILITIES);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_AUDIOIODEVICECAPABILITIES);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_CAMERA);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_CAMERACAPABILITIES);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_CONFIGEXTENSION);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_DEVICEVOLUME);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_DYNAMICINTERFACEMANAGEMENT);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_DYNAMICSOURCE);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_ENGINE);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_EQUALIZER);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_IMAGECONTROLS);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_IMAGEDECODERCAPABILITIES);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_IMAGEEFFECTS);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_IMAGEENCODER);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_IMAGEENCODERCAPABILITIES);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_LED);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_METADATAEXTRACTION);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_METADATAINSERTION);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_METADATATRAVERSAL);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_NULL);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_OBJECT);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_OUTPUTMIX);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_PLAY);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_PLAYBACKRATE);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_PREFETCHSTATUS);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_RADIO);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_RDS);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_RECORD);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_SEEK);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_SNAPSHOT);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_STREAMINFORMATION);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_THREADSYNC);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_VIBRA);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_VIDEODECODERCAPABILITIES);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_VIDEOENCODER);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_VIDEOENCODERCAPABILITIES);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_VIDEOPOSTPROCESSING);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(XA_IID_VOLUME);

static void __attribute__((constructor(0))) init_stub_library() {
  INIT_INTERCEPTABLE_STUB_FUNCTION("libOpenMAXAL.so", xaCreateEngine);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libOpenMAXAL.so", xaQueryNumSupportedEngineInterfaces);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libOpenMAXAL.so", xaQuerySupportedEngineInterfaces);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_ANDROIDBUFFERQUEUESOURCE);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_AUDIODECODERCAPABILITIES);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_AUDIOENCODER);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_AUDIOENCODERCAPABILITIES);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_AUDIOIODEVICECAPABILITIES);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_CAMERA);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_CAMERACAPABILITIES);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_CONFIGEXTENSION);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_DEVICEVOLUME);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_DYNAMICINTERFACEMANAGEMENT);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_DYNAMICSOURCE);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_ENGINE);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_EQUALIZER);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_IMAGECONTROLS);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_IMAGEDECODERCAPABILITIES);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_IMAGEEFFECTS);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_IMAGEENCODER);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_IMAGEENCODERCAPABILITIES);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_LED);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_METADATAEXTRACTION);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_METADATAINSERTION);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_METADATATRAVERSAL);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_NULL);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_OBJECT);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_OUTPUTMIX);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_PLAY);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_PLAYBACKRATE);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_PREFETCHSTATUS);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_RADIO);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_RDS);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_RECORD);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_SEEK);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_SNAPSHOT);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_STREAMINFORMATION);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_THREADSYNC);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_VIBRA);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_VIDEODECODERCAPABILITIES);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_VIDEOENCODER);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_VIDEOENCODERCAPABILITIES);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_VIDEOPOSTPROCESSING);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenMAXAL.so", XA_IID_VOLUME);
}
// clang-format on
