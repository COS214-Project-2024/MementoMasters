// COMMAND DESIGN PATTERN (Command)
// Command.h ABSTRACT BASE CLASS

#ifndef COMMAND_H
#define COMMAND_H

class Command
{
public:
    virtual void execute() = 0;
    virtual void undo() = 0;
    virtual ~Command() {}
};

#endif // COMMAND_H

