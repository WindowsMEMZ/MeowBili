//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 346.2.9.0.0
//
#ifndef SCROBrailleDisplayManager_h
#define SCROBrailleDisplayManager_h
@import Foundation;

#include "SCROBrailleDisplay.h"
#include "SCROBrailleDisplayDelegate-Protocol.h"
#include "SCROBrailleDisplayHistory.h"
#include "SCROBrailleDisplayManagedQueue.h"
#include "SCROBrailleDisplayManagerStatus.h"
#include "SCROBrailleFormatter.h"
#include "SCROSBrailleDisplayManagerDelegate-Protocol.h"

@class NSAttributedString, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SCROBrailleDisplayManager : NSObject<SCROBrailleDisplayDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_eventQueue;
  SCROBrailleDisplay *_bluetoothBrailleDisplay;
  SCROBrailleDisplay *_stealthBrailleDisplay;
  NSMutableDictionary *_detectedIOElementsDict;
  SCROBrailleFormatter *_currentBrailleFormatter;
  NSMutableSet *_loadedIOElements;
  struct __CFDictionary * _displayConfigurationDict;
  BOOL _showDotsSevenAndEight;
  BOOL _lineDescriptorDisplayCallbackEnabled;
  int _outputContractionMode;
  BOOL _outputShowEightDot;
  BOOL _inputShowEightDot;
  BOOL _shouldBatchUpdates;
  BOOL _automaticBrailleTranslation;
  long long _uiStringCachedLineOffset;
  NSAttributedString *_uiEditingCachedString;
  NSMutableArray *_displayModeStack;
  SCROBrailleDisplayHistory *_history;
  NSAttributedString *_mainString;
  NSAttributedString *_lineString;
  NSAttributedString *_statusString;
  SCROBrailleDisplayManagerStatus *_status;
  NSObject<OS_dispatch_source> *_alertTimer;
  double _alertTimeout;
  int _alertPriority;
  BOOL _isValid;
  int _inputAccessMode;
  NSAttributedString *_blankUIString;
  NSString *_tactileGraphicsDisplayIdentifier;
}

@property (weak, nonatomic) NSObject<SCROSBrailleDisplayManagerDelegate> *delegate;
@property (nonatomic) BOOL inputEightDotBraille;
@property (nonatomic) BOOL wordWrapEnabled;
@property (nonatomic) BOOL panWithTextCursorEnabled;
@property (nonatomic) BOOL autoAdvanceEnabled;
@property (nonatomic) double autoAdvanceDuration;
@property (nonatomic) int inputContractionMode;
@property (nonatomic) unsigned int persistentKeyModifiers;
@property (nonatomic) double lastUserInteractionTime;
@property (readonly, nonatomic) SCROBrailleDisplayManagedQueue *managedDisplayQueue;
@property (copy, nonatomic) id /* block */ eventHandled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)init;
- (void)invalidate;
- (void)_eventQueue_invalidate;
- (void)_mainQueue_invalidate;
- (void)_eventQueue_stop;
- (BOOL)isValid;
- (void)tokenizeString:(id)string intoFormatter:(id)formatter selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)selection;
- (void)_refreshEightDotEnabledOnDisplays;
- (void)_eventQueue_refreshEightDotEnabledOnDisplays;
- (void)_enableAutoDetect;
- (void)_disableAutoDetect;
- (void)_deviceConnectedHandler:(id)handler;
- (void)_addDetectedIOElement:(id)ioelement withDriverIdentifier:(id)identifier;
- (BOOL)_eventQueue_addDetectedIOElement:(id)ioelement withDriverIdentifier:(id)identifier;
- (id)_displayWithIOElement:(id)ioelement driverIdentifier:(id)identifier delegate:(id)delegate;
- (void)_loadNextDriverForIOElement:(id)ioelement;
- (void)_eventQueue_loadNextDriverForIOElement:(id)ioelement;
- (void)brailleDisplay:(id)display driverDidLoad:(BOOL)load;
- (void)_eventQueue_brailleDisplayDriverDidLoad:(id)load;
- (void)_eventQueue_brailleDisplayDriverFailedToLoad:(id)load;
- (void)brailleDriverDisconnected:(id)disconnected;
- (void)_eventQueue_brailleDriverDisconnected:(id)disconnected;
- (void)brailleDisplay:(id)display isSleeping:(BOOL)sleeping;
- (void)_eventQueue_brailleDisplay:(id)display isSleeping:(BOOL)sleeping;
- (void)configurationChangedForBrailleDisplay:(id)display;
- (void)brailleDisplay:(id)display didMoveSelection:(unsigned long long)selection;
- (void)brailleDisplay:(id)display pressedKeys:(id)keys;
- (void)brailleDisplayHadUserInteraction:(id)interaction;
- (void)brailleDidStartEditingWithDisplay:(id)display;
- (void)brailleDisplay:(id)display didReplaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withString:(id)string cursor:(unsigned long long)cursor;
- (void)brailleDisplay:(id)display insertedUntranslatedText:(id)text speakLiterally:(BOOL)literally;
- (void)brailleDisplay:(id)display copyStringToClipboard:(id)clipboard;
- (void)brailleDisplay:(id)display deletedUntranslatedText:(id)text speakLiterally:(BOOL)literally;
- (void)requestSpeech:(id)speech language:(id)language;
- (void)brailleDisplay:(id)display willMemorizeKey:(id)key;
- (void)brailleDisplay:(id)display memorizedKey:(id)key;
- (void)brailleDisplay:(id)display didDisplay:(id)display;
- (void)brailleDisplay:(id)display didPanLeft:(id)left elementToken:(id)token appToken:(id)token lineOffset:(id)offset;
- (void)brailleDisplay:(id)display didPanRight:(id)right elementToken:(id)token appToken:(id)token lineOffset:(id)offset;
- (id)brailleInputManager;
- (id)newBrailleDisplayCommandDispatcher;
- (void)playBorderHitSoundForBrailleDisplay:(id)display;
- (void)playCommandNotSupportedSoundForBrailleDisplay:(id)display;
- (void)loadBluetoothDriverWithAddress:(id)address;
- (void)loadBLEDriverWithIdentifier:(id)identifier;
- (void)removeBluetoothDriverWithAddress:(id)address;
- (void)_resetBluetoothReconnectionTimer;
- (void)_loadStealthDisplay;
- (void)_unloadStealthDisplay;
- (void)_eventQueue_loadStealthDisplay;
- (void)_eventQueue_unloadStealthDisplay;
- (id)driverConfiguration;
- (id)_eventQueue_driverConfiguration;
- (void)_saveBluetoothDisplayConfiguration:(id)configuration;
- (void)_blankOutDisplaysInQueue:(id)queue;
- (BOOL)isConfigured;
- (BOOL)hasActiveDisplays;
- (void)setPrimaryBrailleDisplay:(int)display;
- (void)_eventQueue_setPrimaryDisplay:(int)display;
- (void)setDisplayInputAccessMode:(int)mode;
- (int)displayInputAccessMode;
- (void)_eventQueue_setDisplayInputAccessMode:(int)mode;
- (void)setMainAttributedString:(id)string;
- (void)setMainAttributedString:(id)string forceUpdate:(BOOL)update;
- (id)mainAttributedString;
- (id)_eventQueue_mainAttributedString;
- (void)_eventQueue_setMainAttributedString:(id)string shouldDisplay:(BOOL)display forceUpdate:(BOOL)update;
- (void)setAggregatedStatus:(id)status;
- (id)aggregatedStatus;
- (void)_eventQueue_setAggregatedStatus:(id)status;
- (void)setMasterStatusCellIndex:(long long)index;
- (long long)masterStatusCellIndex;
- (void)_eventQueue_setMasterStatusCellIndex:(long long)index;
- (void)setVirtualStatusAlignment:(int)alignment;
- (int)virtualStatusAlignment;
- (void)_eventQueue_setVirtualStatusAlignment:(int)alignment;
- (void)panDisplayLeft:(int)left;
- (void)panDisplayRight:(int)right;
- (void)panDisplayBeginning:(int)beginning;
- (void)panDisplayEnd:(int)end;
- (void)_eventQueue_panDisplay:(long long)display token:(int)token;
- (void)setUIDisplayMode;
- (void)setAnnouncementsDisplayMode;
- (void)exitCurrentDisplayMode;
- (int)displayMode;
- (void)_eventQueue_setDisplayMode:(int)mode;
- (void)_eventQueue_doSetDisplayMode:(int)mode;
- (void)_eventQueue_exitCurrentDisplayMode;
- (void)_eventQueue_alertTimeoutHandler;
- (void)_eventQueue_resetAlertTimer;
- (void)_eventQueue_stopAlertTimer;
- (void)_eventQueue_fireAlertTimeoutHandler;
- (void)_eventQueue_popDisplayModeStack;
- (id)_eventQueue_cachedMainStringForDisplayMode:(int)mode;
- (void)configureTableWithIdentifier:(id)identifier;
- (void)_eventQueue_setTableIdentifier:(id)identifier;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)text;
- (BOOL)alwaysUsesNemethCodeForTechnicalText;
- (void)_eventQueue_setAlwaysUsesNemethCodeForTechnicalText:(BOOL)text;
- (void)setContractionMode:(int)mode;
- (int)contractionMode;
- (void)_eventQueue_setContractionMode:(int)mode;
- (void)setShowEightDotBraille:(BOOL)braille;
- (BOOL)showEightDotBraille;
- (void)_eventQueue_setShowEightDotBraille:(BOOL)braille;
- (void)_eventQueue_setInputEightDotBraille:(BOOL)braille;
- (void)setAutomaticBrailleTranslationEnabled:(BOOL)enabled;
- (BOOL)automaticBrailleTranslation;
- (void)_eventQueue_setAutomaticBrailleTranslationEnabled:(BOOL)enabled;
- (void)_eventQueue_setWordWrapEnabled:(BOOL)enabled;
- (void)_eventQueue_setPanWithTextCursorEnabled:(BOOL)enabled;
- (void)_eventQueue_setAutoAdvanceEnabled:(BOOL)enabled;
- (void)_eventQueue_setAutoAdvanceDuration:(double)duration;
- (void)_eventQueue_setInputContractionMode:(int)mode;
- (void)_eventQueue_setPersistentKeyModifiers:(unsigned int)modifiers;
- (void)setShowDotsSevenAndEight:(BOOL)eight;
- (BOOL)showDotsSevenAndEight;
- (void)_eventQueue_showDotsSevenAndEight:(BOOL)eight;
- (BOOL)isCandidateSelectionOn;
- (void)cancelCandidateSelection;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (BOOL)isWordDescriptionOn;
- (void)showPreviousWordDescription;
- (void)showNextWordDescription;
- (void)showPreviousAnnouncement;
- (void)showNextAnnouncement;
- (void)_eventQueue_showNextAnnouncement:(BOOL)announcement;
- (void)setLineDescriptorDisplayCallbackEnabled:(BOOL)enabled;
- (BOOL)lineDescriptorDisplayCallbackEnabled;
- (void)_eventQueue_setLineDescriptorCallbackEnabled:(BOOL)enabled;
- (long long)tokenForRouterIndex:(long long)index location:(long long *)location appToken:(id *)token forDisplayWithToken:(int)token;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfBrailleCellRepresentingCharacterAtIndex:(unsigned long long)index;
- (void)clearTimeoutAlert;
- (void)simulateKeypress:(id)keypress;
- (void)_eventQueue_simulateKeypress:(id)keypress;
- (void)setPrepareToMemorizeNextKey:(BOOL)key immediate:(BOOL)immediate forDisplayWithToken:(int)token;
- (void)_eventQueue_prepareToMemorizeNextKey:(BOOL)key immediately:(BOOL)immediately forDisplayWithToken:(int)token;
- (void)beginUpdates;
- (void)endUpdates;
- (void)_eventQueue_setBatchUpdates:(BOOL)updates;
- (void)setSingleLetterInputIsOn:(BOOL)on;
- (void)_eventQueue_setSingleLetterInputIsOn:(BOOL)on;
- (void)setTextSearchModeIsOn:(BOOL)on;
- (void)_eventQueue_setTextSearchModeIsOn:(BOOL)on;
- (void)translateBrailleToClipboard;
- (void)_eventQueue_translateBrailleToClipboard;
- (void)setBrailleKeyDebounceTimeout:(double)timeout;
- (void)_eventQueue_setBrailleKeyDebounceTimeout:(double)timeout;
- (void)_enumerateActiveDisplays:(id /* block */)displays;
- (id)_eventQueue_activeDisplayForToken:(int)token;
- (void)resetEditingManager;
- (void)_eventQueue_resetEditingManager;
@end

#endif /* SCROBrailleDisplayManager_h */