//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICollectionViewLayout_h
#define UICollectionViewLayout_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "UICollectionView.h"
#include "UICollectionViewLayout.h"
#include "UICollectionViewLayoutInvalidationContext.h"
#include "UIColor.h"
#include "UIDynamicAnimator.h"
#include "_UICollectionViewAnimationContext.h"
#include "_UICollectionViewCompositionLayout.h"
#include "_UICollectionViewLayoutOrthogonalScrolling-Protocol.h"
#include "_UICollectionViewLayoutSwipeActions-Protocol.h"
#include "_UICollectionViewLayoutSwipeActionsModule.h"

@class NSArray, NSIndexSet, NSMutableDictionary, NSString;

@interface UICollectionViewLayout : NSObject<_UICollectionViewLayoutOrthogonalScrolling, _UICollectionViewLayoutSwipeActions, NSCoding> {
  /* instance variables */
  struct CGSize { double width; double height; } _collectionViewBoundsSize;
  NSMutableDictionary *_initialAnimationLayoutAttributesDict;
  NSMutableDictionary *_finalAnimationLayoutAttributesDict;
  NSMutableDictionary *_deletedSupplementaryIndexPathsDict;
  NSMutableDictionary *_insertedSupplementaryIndexPathsDict;
  NSMutableDictionary *_deletedDecorationIndexPathsDict;
  NSMutableDictionary *_insertedDecorationIndexPathsDict;
  NSMutableDictionary *_decorationViewClassDict;
  NSMutableDictionary *_decorationViewNibDict;
  NSMutableDictionary *_decorationViewExternalObjectsTables;
  UICollectionViewLayout *_transitioningFromLayout;
  UICollectionViewLayout *_transitioningToLayout;
  UIDynamicAnimator *_animator;
  UICollectionViewLayoutInvalidationContext *_invalidationContext;
  _UICollectionViewLayoutSwipeActionsModule *_swipeActionsModule;
  struct { unsigned int x :1 inTransitionFromTransitionLayout; unsigned int x :1 inTransitionToTransitionLayout; unsigned int x :1 prepared; unsigned int x :1 wantsRightToLeftHorizontalMirroringIfNeeded; unsigned int x :1 isEditing; } _layoutFlags;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (copy, nonatomic) NSIndexSet *sections;
@property (copy, nonatomic) NSIndexSet *items;
@property (copy, nonatomic) NSArray *elementKinds;
@property (nonatomic) _UICollectionViewCompositionLayout *compositionLayout;
@property (nonatomic) UICollectionViewLayout *siblingLayout;
@property (nonatomic) struct CGPoint { double x0; double x1; } layoutOffset;
@property (nonatomic) unsigned long long layoutOffsetEdges;
@property (nonatomic) long long sublayoutType;
@property (nonatomic) BOOL prepared;
@property (retain, nonatomic) _UICollectionViewAnimationContext *collectionViewAnimationContext;
@property (retain, nonatomic) UIColor *preferredBackgroundColor;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } focusFastScrollingIndexBarInsets;
@property (readonly, nonatomic) BOOL _isInLayoutTransition;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)layoutAttributesClass;
+ (Class)invalidationContextClass;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)path;
- (id)layoutAttributesForDecorationViewOfKind:(id)kind atIndexPath:(id)path;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)attributes withOriginalAttributes:(id)attributes;
- (void)_prepareLayout;
- (void)prepareLayout;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)context;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)_invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change fromOldBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)invalidationContextForPreferredLayoutAttributes:(id)attributes withOriginalAttributes:(id)attributes;
- (BOOL)_shouldInvalidateLayoutForUpdatedLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins fromOldMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (BOOL)_shouldInvalidateLayoutForUpdatedSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets fromOldInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (BOOL)_shouldInvalidateLayoutForDataSourceChange;
- (id)_invalidationContextForRefreshingVisibleElementAttributes;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset withScrollingVelocity:(struct CGPoint { double x0; double x1; })velocity;
- (BOOL)_shouldAdjustTargetContentOffsetToValidateContentExtents;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (id /* block */)_animationForReusableView:(id)view toLayoutAttributes:(id)attributes type:(unsigned long long)type;
- (id /* block */)_animationForReusableView:(id)view toLayoutAttributes:(id)attributes;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)_collectionViewWillPerformPendingLayoutBeforeUpdate;
- (void)_prepareForCollectionViewUpdates:(id)updates animated:(BOOL)animated;
- (void)prepareForCollectionViewUpdates:(id)updates;
- (void)_prepareForCollectionViewUpdates:(id)updates withDataSourceTranslator:(id)translator;
- (void)_finalizeCollectionViewUpdate:(id)update;
- (void)finalizeCollectionViewUpdates;
- (id)snapshottedLayoutAttributeForItemAtIndexPath:(id)path;
- (void)registerClass:(Class)class forDecorationViewOfKind:(id)kind;
- (void)registerNib:(id)nib forDecorationViewOfKind:(id)kind;
- (void)_prepareForTransitionToLayout:(id)layout;
- (void)_prepareForTransitionFromLayout:(id)layout;
- (void)_finalizeLayoutTransition;
- (void)prepareForTransitionToLayout:(id)layout;
- (void)prepareForTransitionFromLayout:(id)layout;
- (void)finalizeLayoutTransition;
- (void)_didFinishLayoutTransitionAnimations:(BOOL)animations;
- (struct CGPoint { double x0; double x1; })transitionContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset keyItemIndexPath:(id)path;
- (void)_setCollectionView:(id)view;
- (void)_setCollectionViewBoundsSize:(struct CGSize { double x0; double x1; })size;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (void)finalizeAnimatedBoundsChange;
- (void)_setDynamicAnimator:(id)animator;
- (id)_dynamicAnimator;
- (id)_propertyAnimatorForCollectionViewUpdates:(id)updates withCustomAnimator:(id)animator;
- (void)_prepareToAnimateFromCollectionViewItems:(id)items atContentOffset:(struct CGPoint { double x0; double x1; })offset toItems:(id)items atContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)path;
- (id)_initialLayoutAttributesForAppearingItemAtIndexPath:(id)path;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)path;
- (id)_finalLayoutAttributesForDisappearingItemAtIndexPath:(id)path;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)kind atIndexPath:(id)path;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)kind atIndexPath:(id)path;
- (id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)kind;
- (id)_indexPathsToDeleteForDecorationViewOfKind:(id)kind;
- (id)_indexPathsToInsertForSupplementaryViewOfKind:(id)kind;
- (id)_indexPathsToInsertForDecorationViewOfKind:(id)kind;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)kind;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)kind;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)kind;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)kind;
- (void)_finalizeCollectionViewItemAnimations;
- (id)_decorationViewForLayoutAttributes:(id)attributes;
- (void)_setExternalObjectTable:(id)table forNibLoadingOfDecorationViewOfKind:(id)kind;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (void)_invalidateLayoutUsingContext:(id)context;
- (struct CGPoint { double x0; double x1; })_contentOffsetFromProposedContentOffset:(struct CGPoint { double x0; double x1; })offset forScrollingToItemAtIndexPath:(id)path atScrollPosition:(unsigned long long)position;
- (BOOL)canBeEdited;
- (BOOL)isEditing;
- (void)setEditing:(BOOL)editing;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dynamicReferenceBounds;
- (void)_setSections:(id)sections;
- (id)_sections;
- (void)_setItems:(id)items;
- (id)_items;
- (void)_setElementKinds:(id)kinds;
- (id)_elementKinds;
- (void)_setCompositionLayout:(id)layout;
- (id)_compositionLayout;
- (void)_setSiblingLayout:(id)layout;
- (id)_siblingLayout;
- (void)_setLayoutOffset:(struct CGPoint { double x0; double x1; })offset;
- (struct CGPoint { double x0; double x1; })_layoutOffset;
- (void)_setLayoutOffsetEdges:(unsigned long long)edges;
- (unsigned long long)_layoutOffsetEdges;
- (struct CGPoint { double x0; double x1; })_offsetInTopParentLayout:(id *)layout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect toLayout:(id)layout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect fromLayout:(id)layout;
- (void)_setPrepared:(BOOL)prepared;
- (BOOL)_isPrepared;
- (BOOL)_supportsPrefetchingWithEstimatedSizes;
- (BOOL)_estimatesSizes;
- (BOOL)_disablesDoubleSidedAnimations;
- (BOOL)_estimatesSupplementaryItems;
- (BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (struct CGSize { double x0; double x1; })_fallbackItemSize;
- (BOOL)_wantsUpdateVisibleCellsPassNotifications;
- (void)_willPerformUpdateVisibleCellsPass;
- (void)_didPerformUpdateVisibleCellsPassWithLayoutOffset:(struct CGPoint { double x0; double x1; })offset;
- (BOOL)_wantsInvalidateLayoutForPreferredLayoutAttributes;
- (void)_prepareForPreferredAttributesQueryForView:(id)view withLayoutAttributes:(id)attributes;
- (void)_postProcessPreferredAttributes:(id)attributes forView:(id)view;
- (void)_cellBackgroundOrBottomSeparatorChangedAtIndexPath:(id)path separatorOnly:(BOOL)only;
- (void)_scrollViewLayoutAdjustmentsChanged;
- (id)_reorderingTargetItemIndexPathForPosition:(struct CGPoint { double x0; double x1; })position withPreviousIndexPath:(id)path;
- (id)_layoutAttributesForReorderedItemAtIndexPath:(id)path withTargetPosition:(struct CGPoint { double x0; double x1; })position;
- (id)_invalidationContextForReorderingTargetPosition:(struct CGPoint { double x0; double x1; })position targetIndexPaths:(id)paths withPreviousPosition:(struct CGPoint { double x0; double x1; })position previousIndexPaths:(id)paths;
- (id)_invalidationContextForEndingReorderingItemToFinalIndexPaths:(id)paths previousIndexPaths:(id)paths reorderingCancelled:(BOOL)cancelled;
- (id)targetIndexPathForInteractivelyMovingItem:(id)item withPosition:(struct CGPoint { double x0; double x1; })position;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)path withTargetPosition:(struct CGPoint { double x0; double x1; })position;
- (id)invalidationContextForInteractivelyMovingItems:(id)items withTargetPosition:(struct CGPoint { double x0; double x1; })position previousIndexPaths:(id)paths previousPosition:(struct CGPoint { double x0; double x1; })position;
- (id)invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(id)paths previousIndexPaths:(id)paths movementCancelled:(BOOL)cancelled;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_preferredLayoutMargins;
- (BOOL)_wantsRightToLeftHorizontalMirroringIfNeeded;
- (void)_setWantsRightToLeftHorizontalMirroringIfNeeded:(BOOL)needed;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_focusFastScrollingIndexBarInsets;
- (struct CGPoint { double x0; double x1; })_contentOffsetForScrollingToSection:(long long)section;
- (id)_layoutAttributesForNextItemInDirection:(struct CGPoint { double x0; double x1; })direction fromIndexPath:(id)path constrainedToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)_layoutAttributesForInsertionIndicatorAtItemWithTargetAttributes:(id)attributes targetPositionEdges:(unsigned long long)edges;
- (id)_layoutAttributesForInsertionIndicatorAtTargetPosition:(struct CGPoint { double x0; double x1; })position sourceIndexPath:(id)path;
- (id)_layoutAttributesForInsertionIndicatorAtTargetIndexPath:(id)path;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForInsertionIndicatorForTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame axis:(unsigned long long)axis edges:(unsigned long long)edges;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerInsertionIndicatorFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame targetAttributes:(id)attributes axis:(unsigned long long)axis edges:(unsigned long long)edges;
- (id)_indexPathForInsertionIndicatorForTargetAttributes:(id)attributes axis:(unsigned long long)axis edges:(unsigned long long)edges previousAttributes:(id)attributes nextAttributes:(id)attributes;
- (BOOL)_allowsItemInteractionsToBegin;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_supplementaryViewInsetsForScrollingToItemAtIndexPath:(id)path;
- (struct CGPoint { double x0; double x1; })_targetPositionForInteractiveMovementOfItemAtIndexPath:(id)path withProposedTargetPosition:(struct CGPoint { double x0; double x1; })position;
- (unsigned long long)_layoutAxisForAttributes:(id)attributes previousAttributes:(id)attributes nextAttributes:(id)attributes;
- (id)_previousLayoutAttributesForGlobalIndex:(long long)index;
- (id)_nextLayoutAttributesForGlobalIndex:(long long)index;
- (id)_layoutAttributesForElementsInProjectedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withProjectionVector:(struct CGVector { double x0; double x1; })vector projectionDistance:(double)distance;
- (id)_layoutAttributesForItemNearestPosition:(struct CGPoint { double x0; double x1; })position maximumDistance:(double)distance;
- (long long)developmentLayoutDirection;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (BOOL)_wantsUntrackedAnimationCleanupForAuxillaryItems;
- (BOOL)_wantsAnimationsForOffscreenAuxillaries;
- (BOOL)_needsRecomputeOfPreferredAttributesForVisibleEstimatedItemsDuringUpdate;
- (BOOL)_preparedForBoundsChanges;
- (BOOL)_overridesSafeAreaPropagationToDescendants;
- (unsigned long long)_edgesForSafeAreaPropagationToDescendants;
- (BOOL)_disallowsFadeCellsForBoundsChange;
- (unsigned long long)_layoutAxis;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentFrameForSection:(long long)section;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutFrameForSection:(long long)section;
- (BOOL)_hasOrthogonalScrollingSections;
- (id)_orthogonalScrollingSections;
- (void)_setOffset:(struct CGPoint { double x0; double x1; })offset forOrthogonalScrollingSection:(long long)section;
- (struct CGPoint { double x0; double x1; })_offsetForOrthogonalScrollingSection:(long long)section;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_orthogonalScrollingLayoutRectForSection:(long long)section;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_orthogonalScrollingContentRectForSection:(long long)section;
- (id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regions;
- (unsigned long long)_orthogonalScrollingAxis;
- (double)_orthogonalScrollingDecelerationRateForSection:(long long)section;
- (BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)path elementKind:(id)kind;
- (BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)path elementKind:(id)kind;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)attributes frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)attributes;
- (BOOL)_orthogonalScrollingElementShouldAppearBelowForAttributes:(id)attributes;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)path;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)path;
- (void)_willBeginSwiping;
- (void)_didEndSwiping;
- (BOOL)_supportsSwipeActionsForIndexPath:(id)path;
- (void)_updateStyleForSwipeActionsConfiguration:(id)configuration indexPath:(id)path;
- (long long)_anchorForAuxiliaryElementOfKind:(id)kind;
- (double)_alignedContentMarginGivenMargin:(double)margin;
- (BOOL)_wantsBandSelectionVisualsInSection:(long long)section;
- (BOOL)_allowsPanningAcrossConstrainedAxisToBeginMultiSelectInteractionInSection:(long long)section;
- (BOOL)_wantsCustomSectionContainers;
- (id)_customContainerSectionIndexes;
- (id)_sectionDescriptorForSectionIndex:(long long)index;
- (BOOL)_shouldAddElementToSectionContainer:(id)container;
- (id)_layoutAttributesForIndelibleElements;
- (BOOL)_initialAppearingLayoutAttributesCanBeOverriddenForEstimatedSizing;
- (void)_setPreferredBackgroundColor:(id)color;
- (id)_preferredBackgroundColor;
- (long long)_sublayoutType;
- (void)_setSublayoutType:(long long)type;
- (id)_collectionViewAnimationContext;
- (void)_setCollectionViewAnimationContext:(id)context;
@end

#endif /* UICollectionViewLayout_h */