class Command
{
private:
  /* data */

public:
  Command (arguments);
  virtual ~Command () {}
  virtual void execute() = 0;
  virtual void undo() = 0;
};
