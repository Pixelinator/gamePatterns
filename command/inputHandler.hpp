class InputHandler
{
private:
  Command *buttonX_;
  Command *buttonY_;
  Command *buttonA_;
  Command *buttonB_;

public:
  InputHandler (arguments);
  virtual ~InputHandler ();
  Command* handleInput();
};

Command* InputHandler::handleInput()
{
  if (isPressed(BUTTON_X)) {return buttonX_;}
  if (isPressed(BUTTON_Y)) {return buttonY_;}
  if (isPressed(BUTTON_A)) {return buttonA_;}
  if (isPressed(BUTTON_B)) {return buttonB_;}
}
