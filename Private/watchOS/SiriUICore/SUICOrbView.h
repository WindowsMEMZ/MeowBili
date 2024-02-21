//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.25.1.0.0
//
#ifndef SUICOrbView_h
#define SUICOrbView_h
@import Foundation;

#include "UIView.h"

@class CADisplayLink, CAMetalLayer, MTLRenderPassDescriptor, NSTimer;
@protocol MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLRenderPipelineState, MTLTexture;

@interface SUICOrbView : UIView {
  /* instance variables */
  CAMetalLayer *_metalLayer;
  CADisplayLink *_displayLink;
  id /* block */ _offCompletion;
  NSObject<MTLDevice> *_device;
  NSObject<MTLCommandQueue> *_commandQueue;
  NSObject<MTLBuffer> *_dynamicUniformBuffer;
  NSObject<MTLRenderPipelineState> *_siriChipBackfacePipeline;
  NSObject<MTLRenderPipelineState> *_siriChipFrontfacePipeline;
  NSObject<MTLRenderPipelineState> *_siriCompositePipeline;
  NSObject<MTLRenderPipelineState> *_sphereMaskPipeline;
  NSObject<MTLRenderPipelineState> *_siriAddBlitPipeline;
  NSObject<MTLTexture> *_siriChipsTexture;
  NSObject<MTLTexture> *_sphereMaskTexture;
  NSObject<MTLTexture> *_siriChipsTextureMSAA;
  NSObject<MTLTexture> *_sphereMaskTextureMSAA;
  NSObject<MTLTexture> *_compositeTextureMSAA;
  NSObject<MTLTexture> *_blurChipsTexture;
  NSObject<MTLTexture> *_smoothStepTexture;
  NSObject<MTLTexture> *_noiseTexture;
  NSObject<MTLRenderPipelineState> *_siriShadowPipeline;
  NSObject<MTLTexture> *_blurMaskTexture;
  MTLRenderPassDescriptor *_siriChipRenderPassDesc;
  MTLRenderPassDescriptor *_sphereMaskRenderPassDesc;
  MTLRenderPassDescriptor *_finalRenderPassDesc;
  NSObject<MTLComputePipelineState> *_blurComputePipeline;
  unsigned int _blurMipCount;
  float _log2sigma;
  NSObject<MTLBuffer> *_siriChipGeom;
  int _chipNumIndexes;
  int _chipIndexBufferOffset;
  NSObject<MTLBuffer> *_sphereGeom;
  int _sphereNumIndexes;
  int _sphereIndexBufferOffet;
  void * _uniformBufferAddress;
  struct { x[4] columns; } _projectionMatrix;
  struct { struct { x[4] columns; } projectionMatrix; " offsets; short x0; p x1; h x2; e x3; const e x4; unsigned short x5; char x6; a x7; long x8; e x9; " x10; float x11; } _sphereUniforms;
  struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _bubbleSpring;
  struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _energySpring;
  struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _volumeSpring;
  struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _chipsSpring;
  struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _specularSpring;
  struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _thinkingSpring;
  struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _speakingSpring;
  struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _glowSpring;
  struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _onSpring;
  struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _chipSpring[6];
   _setupRasterSize;
  long long _renderMode;
  float _delayUntilThinking;
  float _bubbleDrawnSize;
  float _averageChipSize;
  float _maxChipSize;
  float _chipRotation;
  float _chipRandomOffset[18];
  float _time;
  float _sinTime;
  float _thinkRotation;
  float _rotationEnergy;
  float _frameEnergy;
  float _framerateEnergyModifier;
  float _thinkingTimeStart;
  BOOL _startingThinkingModeNow;
  BOOL _fullyThinkingModeNow;
  BOOL _drawingVeryLastFrame;
  BOOL _resetOnNextFrame;
  BOOL _reduceMotion;
  BOOL _reallocTextures;
  float _powerLevel;
  unsigned long long _framerateType;
  int _dynamicFramerate;
  int _maxPhysicsIterationsPerFrame;
  int _framesPerSecond;
  float _physicsRate;
  float _oneOverFPS;
}

@property (nonatomic) int currentlyShownChannel;
@property (nonatomic) int numberOfChips;
@property (nonatomic) float bias;
@property (nonatomic) float scale;
@property (nonatomic) float power;
@property (retain, nonatomic) NSTimer *invalidateTimer;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL suppressTTSAnimations;
@property (nonatomic) BOOL reduceThinkingModeFramerate;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (void)_setupSpring:(struct { float x0; float x1; float x2; float x3; } *)spring withType:(unsigned long long)type initialValue:(float)value;
- (void)_initSprings;
- (void)_initNoiseOffsets;
- (void)_initCommandQueue;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_commonInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_setMode:(long long)mode;
- (void)_updateRenderModeWithDelta:(float)delta;
- (void)_didSetRenderModeFrom:(long long)from to:(long long)to;
- (void)pauseAnimationAndReset;
- (void)animateToOffWithCompletion:(id /* block */)completion;
- (void)setPowerLevel:(float)level;
- (void)_configurePreferredFramesPerSecond:(int)second;
- (void)_setPaused:(BOOL)paused;
- (void)prewarmOrb;
- (void)_prewarmBlurWithBlitEncoder:(id)encoder src:(id)src dst:(id)dst mipCount:(unsigned int)count;
- (void)_loadMetalPipelines;
- (void)_loadMetalState;
- (void)_createSphereBuffer;
- (void)_createSiriChipBuffer;
- (void)_createSmoothStepTexture;
- (void)_createNoiseTexture;
- (void)_loadAssets;
- (void)_updateDynamicBufferState;
- (void)_updateChipsSizesForOnOff;
- (void)_updateSiriPhysics:(float)physics;
- (void)_updateSiriGraphicsState:(double)state;
- (void)_blurInCommandBuffer:(id)buffer sourceTexture:(id)texture destinationTexture:(id)texture;
- (void)_drawingVeryLastFrameLogic:(id)logic;
- (void)_drawingVeryLastFrameOffCompletion;
- (void)_drawSiriFrame:(id)frame;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_updateMetalTextureRasterSize:(struct CGSize { double x0; double x1; })size;
- (void)_startReducedFramerateForPerf;
- (void)_endReducedFramerateForPerf;
- (void)_choosePhysicsRate:(int)rate;
- (void)_resetDisplayLinkFramerate;
- (void)invalidate;
- (void)_invalidateDisplayLink;
- (float)linearPowerLevel;
@end

#endif /* SUICOrbView_h */