//
//  Game.h
//  Pong
//
//  Created by Carlos Santos on 01/02/14.
//  Copyright (c) 2014 Carlos Santos. All rights reserved.
//

#import <UIKit/UIKit.h>

int Y;
int X;
int ComputerScoreNumber;
int PlayerScoreNumber;

@interface Game : UIViewController
{
    IBOutlet UIImageView *Ball;
    IBOutlet UIButton *StartButton;
    IBOutlet UIImageView *Player;
    IBOutlet UIImageView *Computer;
    IBOutlet UILabel *PlayerScore;
    IBOutlet UILabel *ComputerScore;
    IBOutlet UILabel *WinOrLose;
    IBOutlet UIButton *Exit;
    
    
    NSTimer *timer;

}

-(IBAction)StartButton:(id)sender;
-(void)BallMovement;
-(void)ComputerMovement;
-(void)Collision;

@end
