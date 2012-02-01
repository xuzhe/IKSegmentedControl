
@class IKSegmentedControl;

@interface IKSeparators : UIView {
}

@property (unsafe_unretained, nonatomic, readonly) IKSegmentedControl *segmentedControl;
/**
 @default [UIColor lightGrayColor]
 @discussion UIColor and UIImage are supported.
 */
@property (nonatomic, strong) id separator;
@property (nonatomic) BOOL separateSelectedItem; // default NO

- (id)initWithSegmentedControl:(IKSegmentedControl *)aSegmentedControl;

@end
