#include "create.h"
#include "crowbar.h"
#include "CRB.h"
void crb_function_define(string *identifier, ParameterList *parameter_list,
                         Block *block) {
  auto fd = new FunctionDefinition(identifier, parameter_list, block, false);
  CRB::Interpreter::getInstance()->add_function(fd);
}
ParameterList *crb_create_parameter_list(string *identifier) {
  // auto list = new ParameterList();
  // list->add_parameter(identifier);
  // return list;
}
ParameterList *crb_chain_parameter_list(ParameterList *list,
                                   string *identifier) {
  // list->add_parameter(identifier);
  // return list;
}
ArgumentList *crb_create_argument_list(Expression *expression) {
  // auto list = new ArgumentList();
  // list->add_argument(expression);
  // return list;
}
ArgumentList *crb_chain_argument_list(ArgumentList *list, Expression *expr) {
  // list->add_argument(expr);
  // return list;
}
StatementList *crb_create_statement_list(Statement *statement) {
  // auto list = new StatementList();
  // list->add_statement(statement);
  // return list;
}
StatementList *crb_chain_statement_list(StatementList *list,
                                        Statement *statement) {
  // list->add_statement(statement);
  // return list;
}
ExpressionList *crb_create_expression_list(Expression *expression) {
  // auto list = new ExpressionList();
  // list->add_expression(expression);
  // return list;
}
ExpressionList *crb_chain_expression_list(ExpressionList *list, Expression *expr) {
  // list->add_expression(expression);
  // return list;
}
Expression *crb_create_comma_expression(Expression *left, Expression *right) {
  // return new Expression(CRB_TYPE::COMMA_EXPRESSION, left, right);
}
Expression *crb_create_assign_expression(CRB_TYPE::ExpressionType assign_type, Expression *variable,
                                             Expression *operand) {
  // return new Expression(assign_type, variable, operand);
}
Expression *crb_create_binary_expression(CRB_TYPE::ExpressionType operator_type,
                                         Expression *left,
                                         Expression *right) {
  // calculate the constant
  // if ((left->type == CRB_TYPE::INT_EXPRESSION
  //      || left->type == CRB_TYPE::DOUBLE_EXPRESSION)
  //     && (right->type == CRB_TYPE::INT_EXPRESSION
  //         || right->type == CRB_TYPE::DOUBLE_EXPRESSION)) {
      // CRB_TYPE::Value v;
  //     v = Interpreter::getInstance()->eval_constant(operator_type, left, right);
  //     return Expression(v);
  // } else {
      // return new Expression(operator_type, left, right);
  // }
}
Expression *crb_create_minus_expression(Expression *operand) {
  // calculate the constant
  // if (operand->type == CRB_TYPE::INT_EXPRESSION
  //       || operand->type == CRB_TYPE::DOUBLE_EXPRESSION) {
      // CRB_TYPE::Value v;
  //     v = Interpreter::getInstance()->eval_constant(operator_type, operand);
  //     return Expression(v);
  // } else {
      // return new Expression(operator_type, operand);
  // }
}
Expression *crb_create_logical_not_expression(Expression *operand) {
  // return new Expression(CRB_TYPE::LOGICAL_NOT_EXPRESSION ,operand);
}
Expression *crb_create_identifier_expression(string *identifier) {
  return new Expression(CRB_TYPE::IDENTIFIER_EXPRESSION ,identifier);
}
Expression *crb_create_int_expression(int n) {
  return new Expression(CRB_TYPE::INT_EXPRESSION, n);
}
Expression *crb_create_double_expression(double d) {
  return new Expression(CRB_TYPE::DOUBLE_EXPRESSION, d);
}
Expression *crb_create_string_expression(string *s) {
  return new Expression(CRB_TYPE::STRING_EXPRESSION, s);
}
Expression *crb_create_boolean_expression(bool value) {
 return new Expression(CRB_TYPE::BOOLEAN_EXPRESSION, value); 
}
Expression *crb_create_null_expression(void) {
  return new Expression(CRB_TYPE::NULL_EXPRESSION);
}
Expression *crb_create_function_call_expression(Expression *function,
                                                ArgumentList *argument_list) {
  // return new Expression(CRB_TYPE::FUNCTION_CALL_EXPRESSION, function, argument_list);
}
Expression *crb_create_member_expression(Expression *expression,
                                         string *member_name) {
  // return new Expression(CRB_TYPE::MEMBER_EXPRESSION, expression, member_name);
}
Expression *crb_create_array_expression(ExpressionList *list) {
  // return new Expression(CRB_TYPE::ARRAY_EXPRESSION, list);
}
Expression *crb_create_closure_definition(string *identifier,
                                          ParameterList *parameter_list,
                                          Block *block) {
  // return new Expression(CRB_TYPE::CLOSURE_EXPERSSION, identifier, parameter_list, block);
}

Statement *crb_create_global_statement(IdentifierList *identifier_list) {
  // return new Statement(CRB_TYPE::GLOBAL_STATEMENT, identifier_list);
}

IdentifierList *crb_create_global_identifier_list(string *identifier) {
  // auto list = new IdentifierList();
  // list->add_identifier(identifier);
  // return list;
}
IdentifierList *crb_chain_identifier_list(IdentifierList *list, string *identifier) {
  // list->add_identifier(identifier);
  // return list;
}
Statement *crb_create_if_statement(Expression *condition,
                                    Block *then_block, ElsifList *elsif_list,
                                    Block *else_block) {
  // return new Statement(CRB_TYPE::IF_STATEMENT, condition, then_block, elsif_list, else_block);
}
ElsifList *crb_create_elsif_list(Elsif *elsif) {
  // auto list = new ElsifList;
  // list->add_elsif(elsif);
  // return list;
}
ElsifList *crb_chain_elsif_list(ElsifList *list, Elsif *elsif) {
  // list->add_elsif(elsif);
  // return list;
}
Elsif *crb_create_elsif(Expression *expr, Block *block) {
  // return new Expression(CRB_TYPE::ELSIF_EXPERSSION, expr, block);
}
Statement *crb_create_while_statement(Expression *condition, Block *block) {
  // return new Statement(CRB_TYPE::WHILE_EXPRESSION, condition, block);
}
Statement *crb_create_for_statement(Expression *init, Expression *cond,
                                    Expression *post, Block *block) {
  // return new Statement(CRB_TYPE::FOR_STATEMENT, init, cond, post, block);
}
Block *crb_create_block(StatementList *statement_list) {
  // return new Block(statement_list);
}
Statement *crb_create_expression_statement(Expression *expression) {
  // return new Statement(expression);
}
Statement *crb_create_return_statement(Expression *expression) {
  // return new Statement(CRB_TYPE::RETURN_STATEMENT, expression);
}
Statement *crb_create_break_statement(void) {
  // return new Statement(CRB_TYPE::BREAK_STATEMENT);
}
Statement *crb_create_continue_statement(void) {
  // return new Statement(CRB_TYPE::CONTINUE_STATEMENT);
}

Expression *crb_create_index_expression(Expression *array, Expression *index) {
  // return new Expression(CRB_TYPE::INDEX_EXPRESSION, array, index);
}
Expression *crb_create_incdec_expression(Expression *operand, CRB_TYPE::ExpressionType inc_or_dec) {
  // return new Expression(inc_or_dec, operand);
}
