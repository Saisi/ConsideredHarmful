/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:13 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol BITFeedbackUserDataDelegate
@required
-(void)userDataUpdateCancelled;
-(void)userDataUpdateFinished;
-(void)userDataUpdateCancelled;
-(void)userDataUpdateFinished;
@end

@protocol BITFeedbackComposeViewControllerDelegate
@optional
-(void)feedbackComposeViewController(id):arg1 didFinishWithResult(unsigned):arg2 ;
-(void)feedbackComposeViewControllerDidFinish(id):arg1 ;
@end

@protocol BITAttributedLabelDelegate
@optional
-(void)attributedLabel(id):arg1 didSelectLinkWithURL(id):arg2 ;
-(void)attributedLabel(id):arg1 didSelectLinkWithAddress(id):arg2 ;
-(void)attributedLabel(id):arg1 didSelectLinkWithPhoneNumber(id):arg2 ;
-(void)attributedLabel(id):arg1 didSelectLinkWithDate(id):arg2 ;
-(void)attributedLabel(id):arg1 didSelectLinkWithDate(id):arg2 timeZone(id):arg3 duration(double):arg4 ;
-(void)attributedLabel(id):arg1 didSelectLinkWithTextCheckingResult(id):arg2 ;
@end