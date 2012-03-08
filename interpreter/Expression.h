#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "Context.h"

class Expression
{
    public:
        Expression(){}
        virtual ~Expression(){}

        virtual bool match(Context &) = 0;
};

class LiteralExp: public Expression
{
    public:
        LiteralExp(const char ch):_ch(ch){}
        virtual ~LiteralExp(){}
        
        bool match(Context &context){
            if(context.nextChar() == _ch) return true;
            return false;
        }

    private:
        char _ch;
};

class AlternateExp: public Expression
{
    public:
        AlternateExp(Expression *alt1, Expression *alt2):
            _alt1(alt1), _alt2(alt2){}
        virtual ~AlternateExp(){
        }

        bool match(Context &context){
            context.backup();
            if(_alt1->match(context)) return true;
            context.restore();
            return _alt2->match(context);
        }

    private:
        Expression *_alt1;
        Expression *_alt2;
};

class SequenceExp: public Expression
{
    public:
        SequenceExp(Expression *seq1, Expression *seq2):
            _seq1(seq1), _seq2(seq2){}
        virtual ~SequenceExp(){
        }

        bool match(Context& context){
            return _seq1->match(context) && _seq2->match(context);
        }

    private:
        Expression *_seq1;
        Expression *_seq2;
};

class RepeatExp: public Expression
{
    public:
        RepeatExp(Expression *rep):_rep(rep){}
        virtual ~RepeatExp(){
        }
        
        bool match(Context& context){
            while((!context.end()) && _rep->match(context));
            return context.end(); 
        }

    private:
        Expression *_rep;
};

#endif
