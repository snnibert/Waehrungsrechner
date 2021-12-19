//
//  MenuViewController.h
//  Waehrungsrechner
//
//  Created by Labor on 15.12.21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class MenueViewController;

@protocol MenueViewControllerDelegate <NSObject>

- (void)addItemViewController:(MenueViewController*)controller didFinishEnteringItem:(NSInteger)decimalPlaces;

@end

@interface MenueViewController : UIViewController
{
    UILabel* _labelValue;
    NSInteger _decimalPlaces;
    bool _isNotFirstStartup;
}

@property (nonatomic) NSInteger decimalPlaces;
@property (nonatomic, weak) id <MenueViewControllerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
