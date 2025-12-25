#ifndef AVERCAPTUREAPI_H
#define AVERCAPTUREAPI_H

typedef long LONGPTR;

//BOOL LoadDLL(HINSTANCE *hdll);
// error code
enum
{
	CAP_EC_SUCCESS                =  0,
	CAP_EC_INIT_DEVICE_FAILED     = -1,
	CAP_EC_DEVICE_IN_USE          = -2,
	CAP_EC_NOT_SUPPORTED          = -3,
	CAP_EC_INVALID_PARAM          = -4,
	CAP_EC_TIMEOUT                = -5,
	CAP_EC_NOT_ENOUGH_MEMORY      = -6,
	CAP_EC_UNKNOWN_ERROR          = -7,
	CAP_EC_ERROR_STATE            = -8,
	CAP_EC_HDCP_PROTECTED_CONTENT = -9
};

// device type
enum
{
	DEVICETYPE_SD  = 1,
	DEVICETYPE_HD  = 2,
	DEVICETYPE_ALL = 3
};

// video input source
enum
{
	VIDEOSOURCE_COMPOSITE = 0,
	VIDEOSOURCE_SVIDEO    = 1,
	VIDEOSOURCE_COMPONENT = 2,
	VIDEOSOURCE_HDMI      = 3,
	VIDEOSOURCE_VGA       = 4,
	VIDEOSOURCE_SDI       = 5,
	VIDEOSOURCE_ASI       = 6,
	VIDEOSOURCE_DVI       = 7
};

// audio input source
enum
{
	AUDIOSOURCE_NONE      = 0x00000000,
	AUDIOSOURCE_COMPOSITE = 0x00000001,
	AUDIOSOURCE_SVIDEO    = 0x00000002,
	AUDIOSOURCE_COMPONENT = 0x00000004,
	AUDIOSOURCE_HDMI      = 0x00000008,
	AUDIOSOURCE_VGA       = 0x00000010,
	AUDIOSOURCE_SDI       = 0x00000020,
	AUDIOSOURCE_ASI       = 0x00000040,
	AUDIOSOURCE_DVI       = 0x00000080,
	AUDIOSOURCE_DEFAULT   = 0xFFFFFFFF
};

// video format
enum
{										
	VIDEOFORMAT_NTSC = 0,
	VIDEOFORMAT_PAL  = 1,
};

// video resolution
enum
{					
	VIDEORESOLUTION_640X480   = 0,				
	VIDEORESOLUTION_704X576   = 1,				
	VIDEORESOLUTION_720X480   = 2,				
	VIDEORESOLUTION_720X576   = 4,				  	
	VIDEORESOLUTION_1920X1080 = 7,
	VIDEORESOLUTION_160X120   = 20, 
	VIDEORESOLUTION_176X144   = 21,
	VIDEORESOLUTION_240X176   = 22,
	VIDEORESOLUTION_240X180   = 23,
	VIDEORESOLUTION_320X240   = 24,
	VIDEORESOLUTION_352X240   = 25,
	VIDEORESOLUTION_352X288   = 26,
	VIDEORESOLUTION_640X240   = 27,
	VIDEORESOLUTION_640X288   = 28,
	VIDEORESOLUTION_720X240   = 29,
	VIDEORESOLUTION_720X288   = 30,
	VIDEORESOLUTION_80X60     = 31,
	VIDEORESOLUTION_88X72     = 32,
	VIDEORESOLUTION_128X96    = 33,
	VIDEORESOLUTION_640X576   = 34,
	VIDEORESOLUTION_180X120   = 37,
	VIDEORESOLUTION_180X144   = 38,
	VIDEORESOLUTION_360X240   = 39,	
	VIDEORESOLUTION_360X288   = 40,
	VIDEORESOLUTION_768X576   = 41,
	VIDEORESOLUTION_384x288   = 42,
	VIDEORESOLUTION_192x144   = 43,
	VIDEORESOLUTION_1280X720  = 44,
	VIDEORESOLUTION_1024X768  = 45,
	VIDEORESOLUTION_1280X800  = 46, 
	VIDEORESOLUTION_1280X1024 = 47,
	VIDEORESOLUTION_1440X900  = 48,
	VIDEORESOLUTION_1600X1200 = 49,
	VIDEORESOLUTION_1680X1050 = 50,
	VIDEORESOLUTION_800X600   = 51,
	VIDEORESOLUTION_1280X768  = 52,
	VIDEORESOLUTION_1360X768  = 53, 
	VIDEORESOLUTION_1152X864  = 54, 
	VIDEORESOLUTION_1280X960  = 55,
	VIDEORESOLUTION_702X576   = 56,
	VIDEORESOLUTION_720X400   = 57,
	VIDEORESOLUTION_1152X900  = 58,
	VIDEORESOLUTION_1360X1024 = 59,
	VIDEORESOLUTION_1366X768  = 60,
	VIDEORESOLUTION_1400X1050 = 61,
	VIDEORESOLUTION_1440X480  = 62,
	VIDEORESOLUTION_1440X576  = 63,
	VIDEORESOLUTION_1600X900  = 64, 
	VIDEORESOLUTION_1920X1200 = 65,
	VIDEORESOLUTION_1440X1080 = 66,
	VIDEORESOLUTION_1600X1024 = 67,
	VIDEORESOLUTION_3840X2160 = 68
};

// video adjustment property
enum
{
	VIDEOPROCAMPPROPERTY_BRIGHTNESS = 0,
	VIDEOPROCAMPPROPERTY_CONTRAST   = 1,
	VIDEOPROCAMPPROPERTY_HUE        = 2,
	VIDEOPROCAMPPROPERTY_SATURATION = 3
};

// video frame/field capture settings
enum
{
	CT_SEQUENCE_FIELD = 0,
	CT_SEQUENCE_FRAME = 1
};

// video save type
enum
{
	ST_BMP            = 0,
	ST_JPG            = 1,
	ST_AVI            = 2,
	ST_CALLBACK       = 3,
	ST_WAV            = 4,
	ST_WMV            = 5,
	ST_PNG            = 6,
	ST_MPG            = 7,
	ST_MP4            = 8,
	ST_TIFF           = 9,
	ST_CALLBACK_RGB24 = 10,
	ST_CALLBACK_ARGB  = 11,
	ST_TS             = 13
};

// video capture duration settings
enum 
{
	DURATION_TIME  = 1,
	DURATION_COUNT = 2
};

// audio bit rate
enum AudioBitRate
{
	AUDIOBITRATE_NONE = -1,
	AUDIOBITRATE_96   = 0,
	AUDIOBITRATE_112  = 1,
	AUDIOBITRATE_128  = 2,
	AUDIOBITRATE_144  = 3,
	AUDIOBITRATE_160  = 4,
	AUDIOBITRATE_176  = 5,
	AUDIOBITRATE_192  = 6,
	AUDIOBITRATE_224  = 7,
	AUDIOBITRATE_256  = 8,
	AUDIOBITRATE_288  = 9,
	AUDIOBITRATE_320  = 10,
	AUDIOBITRATE_352  = 11,
	AUDIOBITRATE_384  = 12,
	AUDIOBITRATE_64   = 13,
	AUDIOBITRATE_32   = 14
};

// encoder type
enum
{
	ENCODERTYPE_MPEGAUDIO = 0x00000001,
	ENCODERTYPE_H264      = 0x00000002,
	ENCODERTYPE_MPEG2AAC  = 0x00000004
};


// capture type
enum 
{	
	CT_CALLBACK_MPEGAUDIO = 0x00000001,
	CT_CALLBACK_H264      = 0x00000002,
	CT_CALLBACK_TS        = 0x00000004,
	CT_FILE_TS            = 0x01000000,
	CT_FILE_MP4           = 0x02000000,
	CT_CALLBACK_MPEG2AAC  = 0x00000008
}; 

// sample type
enum
{
	SAMPLETYPE_NULL         = 0x00,
	SAMPLETYPE_RAWVIDEO     = 0x01,		 // lpSampleInfo using VIDEO_SAMPLE_INFO
	SAMPLETYPE_PCMAUDIO     = 0x02,		 // lpSampleInfo using AUDIO_SAMPLE_INFO
	SAMPLETYPE_TS           = 0x10,		 // lpSampleInfo using NULL
	SAMPLETYPE_ES_H264      = 0x20,		 // lpSampleInfo using NULL
	SAMPLETYPE_ES_H265      = 0x21,		 // lpSampleInfo using NULL
	SAMPLETYPE_ES_MPEG4AAC  = 0x30,              // lpSampleInfo using NULL
	SAMPLETYPE_ES_MPEGAUDIO = 0x31,              // lpSampleInfo using AUDIO_SAMPLE_INFO
	SAMPLETYPE_ES_MPEG2AAC  = 0x32               // lpSampleInfo using NULL
};

// video renderer
enum
{
	VIDEORENDERER_DEFAULT = 0,//VMR9
	VIDEORENDERER_VMR7    = 1,
	VIDEORENDERER_VMR9    = 2,
	VIDEORENDERER_EVR     = 3 //vista, win7, server 2008
};

// HWVA
enum
{
	HWVA_ENCODER_H264 = 0x01
};

// image quality
enum
{
	IMAGEQUALITY_BEST   = 0,
	IMAGEQUALITY_NORMAL = 1,
	IMAGEQUALITY_LOW    = 2
};

// image type
enum
{
	IMAGETYPE_BMP  = 1,
	IMAGETYPE_JPG  = 2,
	IMAGETYPE_PNG  = 3,
	IMAGETYPE_TIFF = 4
};

// event
enum
{
	EVENT_CAPTUREIMAGE = 1, //CAPTUREIMAGE_NOTIFY_INFO
	EVENT_CHECKCOPP    = 2  //LONG
};

// copp error code
enum
{
	COPP_ERR_UNKNOWN                                  = 0x80000001,
	COPP_ERR_NO_COPP_HW                               = 0x80000002,
	COPP_ERR_NO_MONITORS_CORRESPOND_TO_DISPLAY_DEVICE = 0x80000003,
	COPP_ERR_CERTIFICATE_CHAIN_FAILED                 = 0x80000004,
	COPP_ERR_STATUS_LINK_LOST                         = 0x80000005,
	COPP_ERR_NO_HDCP_PROTECTION_TYPE                  = 0x80000006,
	COPP_ERR_HDCP_REPEATER                            = 0x80000007,
	COPP_ERR_HDCP_PROTECTED_CONTENT                   = 0x80000008,
	COPP_ERR_GET_CRL_FAILED                           = 0x80000009
};

// RC mode
enum
{
	RCMODE_CBR        = 0x01,       //Constant bitrate 
	RCMODE_VBR        = 0x02,       //Variable bitrate
	RCMODE_ABR        = 0x03,       //Average bitrate
	RCMODE_STRICT_ABR = 0x04        //Strict average bitrate
};

// aspect ratio mode
enum
{
	ASPECT_RATIO_AUTO   = 0,  //Automatic mode (according to the resolution is automatically set to closer to 4:3 or 16:9)
	ASPECT_RATIO_4_3    = 1,  //4:3 mode 
	ASPECT_RATIO_16_9   = 2,  //16:9 mode 
	ASPECT_RATIO_CUSTOM = 4,  //Actual display AspectRatio (user set as the actual display AspectRatio, internal conversion to pixel scale is set to Codec. The actual working mode of the Codec ASPECT RATIO PAR)
	ASPECT_RATIO_PIXEL  = 5   //Always be current the actual number of pixels than (the actual working mode of the Codec ASPECT thewire PAR 1:1)
};

// video sample info
typedef struct _VIDEO_SAMPLE_INFO
{
	DWORD dwWidth;
	DWORD dwHeight;
	DWORD dwStride;
	DWORD dwPixelFormat;
}VIDEO_SAMPLE_INFO;

// video capture callback function
typedef BOOL (WINAPI *VIDEOCAPTURECALLBACK)(VIDEO_SAMPLE_INFO VideoInfo, BYTE *pbData, LONG lLength, __int64 tRefTime, LONGPTR lUserData); 

// video capture info
typedef struct _VIDEO_CAPTURE_INFO	
{
	DWORD  dwCaptureType;
	DWORD  dwSaveType;
	BOOL   bOverlayMix;
	DWORD  dwDurationMode; 
	DWORD  dwDuration;
	LPWSTR lpFileName;
	VIDEOCAPTURECALLBACK lpCallback;
	LONGPTR   lCallbackUserData;
}VIDEO_CAPTURE_INFO;

// audio processor format
typedef struct _AUDIO_PRCS_FORMAT
{
	bool  bUseOriginal;
	DWORD dwChannels; 				
	DWORD dwBitsPerSample;			 
	DWORD dwSamplingRate;
	DWORD cbExtraData;
	BYTE* pbExtraData;
} AUDIO_PRCS_FORMAT;

// audio processor data
typedef struct _AUDIO_PRCS_DATA
{
	int		nLineID;
	DWORD	dwDataSize;
	BYTE*	pbData;
	bool	bFixVideoLatency;	
	LONGLONG	llRefTime;
	LONGLONG	llStartTime;
	LONGLONG	llVideoLatency;
	AUDIO_PRCS_FORMAT* pNewFormat;
} AUDIO_PRCS_DATA;

// audio capture callback function
typedef void (WINAPI * AUDIOPRCSCALLBACK)(AUDIO_PRCS_DATA apData, LONGPTR lpUserData);

// audio capture info
typedef struct _AUDIO_CAPTURE_INFO	
{
	DWORD  dwSaveType;
	LPWSTR lpFileName;
	AUDIOPRCSCALLBACK lpCallback;
	LONGPTR lCallbackUserData;
	DWORD  dwReserved; 
} AUDIO_CAPTURE_INFO;

// video stream info
typedef struct _VIDEO_STREAM_INFO
{
	BOOL  bEnableMix;		
	DWORD dwWidth;
	DWORD dwHeight;
	DWORD dwPixelFormat;
	RECT  rcMixPosition;	
	DWORD dwTransparency;  
	DWORD dwReserved1;
	DWORD dwReserved2;
} VIDEO_STREAM_INFO;

// mpeg2 video encoder info
typedef struct _MPEG2_VIDEOENCODER_INFO
{
	DWORD dwVersion;
	DWORD dwBitrate;
}MPEG2_VIDEOENCODER_INFO;

// mpeg2 audio encoder info
typedef struct _MPEG2_AUDIOENCODER_INFO
{
	DWORD dwVersion;
	DWORD dwBitrate;
}MPEG2_AUDIOENCODER_INFO;

// mpeg4 video encoder info
typedef struct _MPEG4_VIDEOENCODER_INFO
{
	//version 1
	DWORD dwVersion;
	DWORD dwBitrate;
}MPEG4_VIDEOENCODER_INFO;

// mpeg4 audio encoder info
typedef struct _MPEG4_AUDIOENCODER_INFO
{
	DWORD dwVersion;
	DWORD dwBitrate;
}MPEG4_AUDIOENCODER_INFO;

// input video info
typedef struct _INPUT_VIDEO_INFO
{
	DWORD dwVersion;   
	DWORD dwWidth;
	DWORD dwHeight;
	bool  bProgressive;
	DWORD dwFormat;
	DWORD dwFramerate;
}INPUT_VIDEO_INFO;

// HW video encoder info
typedef struct _HW_VIDEOENCODER_INFO
{
	DWORD dwVersion;
	DWORD dwEncoderType;
	DWORD dwRcMode;
	DWORD dwBitrate;
	DWORD dwMinBitrate;
	DWORD dwMaxBitrate;
}HW_VIDEOENCODER_INFO;

// HW audio encoder info
typedef struct _HW_AUDIOENCODER_INFO
{
	DWORD dwVersion;
	DWORD dwEncoderType;
	DWORD dwBitrate;
	DWORD dwSamplingRate;  //Must be set to 0 (default)
}HW_AUDIOENCODER_INFO;

// sample info
typedef struct _SAMPLE_INFO
{
	DWORD dwSampleType;
	LPVOID lpSampleInfo;	 
}SAMPLE_INFO;

// capture callback function
typedef BOOL (WINAPI *CAPTURECALLBACK)(SAMPLE_INFO SampleInfo, BYTE *pbData, LONG lLength, __int64 tRefTime, LPVOID lpUserData); 

// HW stream capture info
typedef struct _HW_STREAM_CAPTURE_INFO     
{
	DWORD dwVersion;
	DWORD dwCaptureType;
	CAPTURECALLBACK lpMainCallback;      //Point types are effective for the callback, the callback function, if the callback type at the same time the callback for video and audio (such as the callback H264 | callback MPEGAUDIO), lpMainCallback pointing in the direction of video stream callback function
	CAPTURECALLBACK lpSecondaryCallback; //Point types are effective for the callback, the type of the file is invalid, if the callback type at the same time the callback for video and audio, such as the callback H264 | callback MPEGAUDIO), lpSecondaryCallback points to the audio stream callback function, or NULL
	LPWSTR lpFileName;
	LPVOID lpMainCallbackUserData;       //Point types are effective for the callback
	LPVOID lpSecondaryCallbackUserData;  //Point types are effective for the callback
}HW_STREAM_CAPTURE_INFO;

//third audio capture
typedef struct _INFO_DESCRIPTION
{   
	DWORD dwVersion;   //must set to 1
	WCHAR szName[256]; // name
	DWORD dwIndex;
}
AUDIOCAPTURESOURCE_INFO, AUDIOCAPTURESOURCE_INPUTTYPE_INFO, AUDIOCAPTURESOURCE_FORMAT_INFO;

// audio capture source setting
typedef struct _AUDIOCAPTURESOURCE_SETTING
{
	DWORD dwVersion;
	DWORD dwCapSourceIndex;
	DWORD dwInputTypeIndex;
	DWORD dwFormatIndex;
}AUDIOCAPTURESOURCE_SETTING;

// capture image notify info
typedef struct _CAPTUREIMAGE_NOTIFY_INFO	
{
	DWORD  dwVersion; //must set to 1
	DWORD  dwImageType;
	BOOL   bFinished;
	DWORD  dwImageIndex;
	LPWSTR lpFileName;
} CAPTUREIMAGE_NOTIFY_INFO;

// event callback function
typedef BOOL (WINAPI *NOTIFYEVENTCALLBACK)(DWORD dwEventCode, LPVOID lpEventData, LPVOID lpUserData);

// capture single image info
typedef struct _CAPTURE_SINGLE_IMAGE_INFO
{
	DWORD  dwVersion;//must set to 1
	DWORD  dwImageType;
	BOOL   bOverlayMix;
	RECT   rcCapRect; 
	LPWSTR lpFileName;
}CAPTURE_SINGLE_IMAGE_INFO;

//for TS(input)
typedef struct _TS_STREAM_CAPTURE_INFO     
{
	DWORD dwVersion;//must set to 1
	LPWSTR lpFileName;
}TS_STREAM_CAPTURE_INFO;

typedef struct _TS_STREAM_CALLBACK_INFO
{
	DWORD  dwVersion;//must set to 1
	CAPTURECALLBACK lpCallback;
	LPVOID lpCallbackUserData;
}TS_STREAM_CALLBACK_INFO;

// video resolution
typedef struct _VIDEO_RESOLUTION
{
	DWORD dwVersion;//must set to 1
	DWORD dwVideoResolution;
	BOOL  bCustom;
	DWORD dwWidth;
	DWORD dwHeight;
}VIDEO_RESOLUTION;

// input audio info
typedef struct _INPUT_AUDIO_INFO
{
	DWORD dwVersion; //must set to 1 
	DWORD dwSamplingRate;
}INPUT_AUDIO_INFO;

// resolution range info
typedef struct _RESOLUTION_RANGE_INFO
{
	DWORD dwVersion;
	BOOL bRange;
	DWORD dwWidthMin;
	DWORD dwWidthMax;
	DWORD dwHeightMin;
	DWORD dwHeightMax;
}RESOLUTION_RANGE_INFO;

// frame rate range info
typedef struct _FRAMERATE_RANGE_INFO
{
	DWORD dwVersion;
	BOOL bRange;
	DWORD dwFramerateMin;
	DWORD dwFramerateMax;
}FRAMERATE_RANGE_INFO;

#ifdef __cplusplus
extern "C"
{
#endif
	//Device Control
	LONG WINAPI AVerGetDeviceNum(DWORD *pdwDeviceNum);
	LONG WINAPI AVerGetDeviceType(DWORD dwDeviceIndex, DWORD *pdwDeviceType);
	LONG WINAPI AVerGetDeviceName(DWORD dwDeviceIndex, LPWSTR szDeviceName);
	LONG WINAPI AVerGetDeviceSerialNum(DWORD dwDeviceIndex, BYTE *pbySerialNum);
	LONG WINAPI AVerCreateCaptureObject(DWORD dwDeviceIndex, HWND hWnd, HANDLE *phCaptureObject);
	LONG WINAPI AVerCreateCaptureObjectEx(DWORD dwDeviceIndex, DWORD dwType, HWND hWnd, HANDLE *phCaptureObject);
	LONG WINAPI AVerDeleteCaptureObject(HANDLE hCaptureObject);
	LONG WINAPI AVerGetVideoSourceSupported(HANDLE hCaptureObject,DWORD *pdwSupported, DWORD *pdwNum);
	LONG WINAPI AVerSetVideoSource(HANDLE hCaptureObject, DWORD dwVideoSource);
	LONG WINAPI AVerGetVideoSource(HANDLE hCaptureObject, DWORD *pdwVideoSource);
	LONG WINAPI AVerGetAudioSourceSupportedEx(HANDLE hCaptureObject, DWORD dwVideoSource, DWORD *pdwSupported);
	LONG WINAPI AVerSetAudioSource(HANDLE hCaptureObject, DWORD dwAudioSource);
	LONG WINAPI AVerGetAudioSource(HANDLE hCaptureObject, DWORD *pdwAudioSource);
	LONG WINAPI AVerSetVideoFormat(HANDLE hCaptureObject, DWORD dwVideoFormat);
	LONG WINAPI AVerGetVideoFormat(HANDLE hCaptureObject, DWORD *pdwVideoFormat);
	LONG WINAPI AVerGetVideoResolutionRangeSupported(HANDLE hCaptureObject, DWORD dwVideoSource,DWORD dwFormat,RESOLUTION_RANGE_INFO *ResolutionRangeInfo);
	LONG WINAPI AVerGetVideoResolutionSupported(HANDLE hCaptureObject,DWORD dwVideoSource,DWORD dwVideoFormat, DWORD *pdwSupported, DWORD *pdwNum);
	LONG WINAPI AVerSetVideoResolutionEx(HANDLE hCaptureObject, VIDEO_RESOLUTION *pVideoResolution);
	LONG WINAPI AVerGetVideoResolutionEx(HANDLE hCaptureObject, VIDEO_RESOLUTION *pVideoResolution);
	LONG WINAPI AVerGetVideoInputFrameRateRangeSupported(HANDLE hCaptureObject, DWORD dwVideoSource, DWORD dwFormat, DWORD dwWidth, DWORD dwHeight, FRAMERATE_RANGE_INFO *FrameRateRangeInfo);
	LONG WINAPI AVerGetVideoInputFrameRateSupportedEx(HANDLE hCaptureObject, DWORD dwVideoSource,DWORD dwVideoFormat, DWORD dwVideoResolution, DWORD *pdwSupported, DWORD *pdwNum);
	LONG WINAPI AVerSetVideoInputFrameRate(HANDLE hCaptureObject, DWORD dwFrameRate);
	LONG WINAPI AVerGetVideoInputFrameRate(HANDLE hCaptureObject, DWORD *pdwFrameRate);
	LONG WINAPI AVerGetAudioSamplingRateSupported(HANDLE hCaptureObject, DWORD dwAudioSource,DWORD *pdwSupported, DWORD *pdwNum);
	LONG WINAPI AVerSetAudioSamplingRate(HANDLE hCaptureObject, DWORD dwSamplingRate);
	LONG WINAPI AVerGetAudioSamplingRate(HANDLE hCaptureObject, DWORD *pdwSamplingRate);
	LONG WINAPI AVerStartStreaming(HANDLE hCaptureObject);
	LONG WINAPI AVerStopStreaming(HANDLE hCaptureObject);
	LONG WINAPI AVerGetAudioInfo(HANDLE hCaptureObject, INPUT_AUDIO_INFO *pAudioInfo);
	LONG WINAPI AVerGetVideoInfo(HANDLE hCaptureObject, INPUT_VIDEO_INFO *pVideoInfo);
	LONG WINAPI AVerGetMacroVisionMode(HANDLE hCaptureObject, DWORD *pdwMode);
	LONG WINAPI AVerGetSignalPresence(HANDLE hCaptureObject, BOOL *pbSignalPresence);
	LONG WINAPI AVerEnumThirdPartyAudioCapSource(HANDLE hCaptureObject, AUDIOCAPTURESOURCE_INFO *pAudioCapSourceInfo, DWORD *pdwNum);
	LONG WINAPI AVerEnumThirdPartyAudioCapSourceInputType(HANDLE hCaptureObject, DWORD dwCapIndex, AUDIOCAPTURESOURCE_INPUTTYPE_INFO *pInputTypeInfo, DWORD *pdwNum);
	LONG WINAPI AVerEnumThirdPartyAudioCapSourceSampleFormat(HANDLE hCaptureObject, DWORD dwCapIndex, AUDIOCAPTURESOURCE_FORMAT_INFO *pFormatInfo, DWORD *pdwNum);
	LONG WINAPI AVerSetThirdPartyAudioCapSource(HANDLE hCaptureObject, AUDIOCAPTURESOURCE_SETTING *pAudioCapSourceSetting);
	LONG WINAPI AVerGetThirdPartyAudioCapSource(HANDLE hCaptureObject, AUDIOCAPTURESOURCE_SETTING *pAudioCapSourceSetting);

	//Preview Control
	LONG WINAPI AVerSetVideoWindowPosition(HANDLE hCaptureObject, RECT rectVideoWnd);
	LONG WINAPI AVerRepaintVideo(HANDLE hCaptureObject);
	LONG WINAPI AVerSetVideoRenderer(HANDLE hCaptureObject, DWORD dwVideoRenderer);
	LONG WINAPI AVerGetVideoRenderer(HANDLE hCaptureObject, DWORD *pdwVideoRenderer);
	LONG WINAPI AVerSetMaintainAspectRatioEnabled(HANDLE hCaptureObject, BOOL bEnabled);
	LONG WINAPI AVerGetMaintainAspectRatioEnabled(HANDLE hCaptureObject, BOOL *pbEnabled);
	LONG WINAPI AVerGetAspectRatio(HANDLE hCaptureObject, DWORD *pdwAspectRatioX, DWORD *pdwAspectRatioY);
	LONG WINAPI AVerSetVideoPreviewEnabled(HANDLE hCaptureObject, BOOL bEnabled);
	LONG WINAPI AVerGetVideoPreviewEnabled(HANDLE hCaptureObject, BOOL *pbEnabled);
	LONG WINAPI AVerSetAudioPreviewEnabled(HANDLE hCaptureObject, BOOL bEnabled);
	LONG WINAPI AVerGetAudioPreviewEnabled(HANDLE hCaptureObject, BOOL *pbEnabled);

	// SW Processor
	LONG WINAPI AVerSetVideoProcAmp(HANDLE hCaptureObject, DWORD dwVideoProcAmpProperty, DWORD dwPropertyValue);
	LONG WINAPI AVerGetVideoProcAmp(HANDLE hCaptureObject, DWORD dwVideoProcAmpProperty, DWORD *pdwPropertyValue);
	LONG WINAPI AVerSetVideoOutputFrameRate(HANDLE hCaptureObject, DWORD dwFrameRate);
	LONG WINAPI AVerGetVideoOutputFrameRate(HANDLE hCaptureObject, DWORD *pdwFrameRate);

	// Capture Audio
	LONG WINAPI AVerCaptureAudioSampleStart(HANDLE hCaptureObject, AUDIOPRCSCALLBACK lpCallback, LONGPTR lCallbackUserData);
	LONG WINAPI AVerCaptureAudioSampleStartEx(HANDLE hCaptureObject, AUDIO_CAPTURE_INFO CaptureInfo);
	LONG WINAPI AVerCaptureAudioSampleStop(HANDLE hCaptureObject);

	// Capture Image
	LONG WINAPI AVerCaptureSingleImage(HANDLE hCaptureObject, CAPTURE_SINGLE_IMAGE_INFO *pCaptureSingleImageInfo);
	LONG WINAPI AVerCaptureSingleImageToBuffer(HANDLE hCaptureObject, BYTE *lpBmpData, LONG *plBufferSize, BOOL bOverlayMix, DWORD dwTimeout);

	// Capture Video
	LONG WINAPI AVerCaptureVideoSequenceStart(HANDLE hCaptureObject, VIDEO_CAPTURE_INFO CaptureInfo);
	LONG WINAPI AVerCaptureVideoSequenceStop(HANDLE hCaptureObject);
	LONG WINAPI AVerSetAudioRecordEnabled(HANDLE hCaptureObject, BOOL bEnabled);
	LONG WINAPI AVerGetAudioRecordEnabled(HANDLE hCaptureObject, BOOL *pbEnabled);

	// Encoder Setting
	LONG WINAPI AVerSetMpeg2VideoEncoderInfo(HANDLE hCaptureObject, MPEG2_VIDEOENCODER_INFO *pVideoEncoderInfo);
	LONG WINAPI AVerGetMpeg2VideoEncoderInfo(HANDLE hCaptureObject, MPEG2_VIDEOENCODER_INFO *pVideoEncoderInfo);
	LONG WINAPI AVerSetMpeg2AudioEncoderInfo(HANDLE hCaptureObject, MPEG2_AUDIOENCODER_INFO *pAudioEncoderInfo);
	LONG WINAPI AVerGetMpeg2AudioEncoderInfo(HANDLE hCaptureObject, MPEG2_AUDIOENCODER_INFO *pAudioEncoderInfo);
	LONG WINAPI AVerSetMpeg4VideoEncoderInfo(HANDLE hCaptureObject, MPEG4_VIDEOENCODER_INFO *pVideoEncoderInfo);
	LONG WINAPI AVerGetMpeg4VideoEncoderInfo(HANDLE hCaptureObject, MPEG4_VIDEOENCODER_INFO *pVideoEncoderInfo);
	LONG WINAPI AVerSetMpeg4AudioEncoderInfo(HANDLE hCaptureObject, MPEG4_AUDIOENCODER_INFO *pAudioEncoderInfo);
	LONG WINAPI AVerGetMpeg4AudioEncoderInfo(HANDLE hCaptureObject, MPEG4_AUDIOENCODER_INFO *pAudioEncoderInfo);

	// HW Encoder Capture Card Setting 
	LONG WINAPI AVerHwSetVideoEncoderInfo(HANDLE hCaptureObject, HW_VIDEOENCODER_INFO *pVideoEncoderInfo);
	LONG WINAPI AVerHwGetVideoEncoderInfo(HANDLE hCaptureObject, HW_VIDEOENCODER_INFO *pVideoEncoderInfo);
	LONG WINAPI AVerHwSetAudioEncoderInfo(HANDLE hCaptureObject, HW_AUDIOENCODER_INFO *pAudioEncoderInfo);
	LONG WINAPI AVerHwGetAudioEncoderInfo(HANDLE hCaptureObject, HW_AUDIOENCODER_INFO *pAudioEncoderInfo);
	LONG WINAPI AVerHwCaptureStreamStart(HANDLE hCaptureObject, HW_STREAM_CAPTURE_INFO *pCaptureInfo);
	LONG WINAPI AVerHwCaptureStreamStop(HANDLE hCaptureObject);

	// Event Callback 
	LONG WINAPI AVerSetEventCallback(HANDLE hCaptureObject, NOTIFYEVENTCALLBACK lpCallback, DWORD dwOptions, LPVOID lpUserData);

	// ASI Input (ex: CD910)
	LONG WINAPI AVerTsCaptureStreamStart(HANDLE hCaptureObject, TS_STREAM_CAPTURE_INFO *pCaptureInfo);
	LONG WINAPI AVerTsCaptureStreamStop(HANDLE hCaptureObject);
	LONG WINAPI AVerTsSetStreamCallback(HANDLE hCaptureObject, TS_STREAM_CALLBACK_INFO *pCallbackInfo);

	//SDI Audio Setting
	LONG WINAPI AVerSetEmbeddedAudioChannel(HANDLE hCaptureObject, DWORD dwChannels);
	LONG WINAPI AVerGetEmbeddedAudioChannel(HANDLE hCaptureObject, DWORD *pdwChannels);

#ifdef __cplusplus
}
#endif


#endif //AVERCAPTUREAPI_H