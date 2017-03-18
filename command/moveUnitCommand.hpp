class MoveUnitCommand : public Command
{
private:
  Unit* unit;
  Vector2f* position;
  Vector2f* positionBefore;

public:
  MoveUnitCommand (Unit* unit, Vector2f* position);
  virtual ~MoveUnitCommand ();
  void execute();
  void undo();
};

MoveUnitCommand::MoveUnitCommand(Unit* unit, Vector2f* position)
{
  unit = unit;
  positionBefore->setX(0,0);
  position->set(position);
}

void MoveUnitCommand::execute()
{
  positionBefore->set(unit->getPosition());
  unit->moveTo(position);
}

void MoveUnitCommand::undo()
{
  unit->moveTo(positionBefore);
}
