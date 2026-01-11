
// Generated from PostgreSQLParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PostgreSQLParserVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of PostgreSQLParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PostgreSQLParserBaseVisitor : public PostgreSQLParserVisitor {
public:

  virtual std::any visitRoot(PostgreSQLParser::RootContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtblock(PostgreSQLParser::StmtblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtmulti(PostgreSQLParser::StmtmultiContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt(PostgreSQLParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallstmt(PostgreSQLParser::CallstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreaterolestmt(PostgreSQLParser::CreaterolestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith_(PostgreSQLParser::With_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptrolelist(PostgreSQLParser::OptrolelistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlteroptrolelist(PostgreSQLParser::AlteroptrolelistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlteroptroleelem(PostgreSQLParser::AlteroptroleelemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateoptroleelem(PostgreSQLParser::CreateoptroleelemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateuserstmt(PostgreSQLParser::CreateuserstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterrolestmt(PostgreSQLParser::AlterrolestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIn_database_(PostgreSQLParser::In_database_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterrolesetstmt(PostgreSQLParser::AlterrolesetstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDroprolestmt(PostgreSQLParser::DroprolestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreategroupstmt(PostgreSQLParser::CreategroupstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAltergroupstmt(PostgreSQLParser::AltergroupstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd_drop(PostgreSQLParser::Add_dropContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateschemastmt(PostgreSQLParser::CreateschemastmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptschemaname(PostgreSQLParser::OptschemanameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptschemaeltlist(PostgreSQLParser::OptschemaeltlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSchema_stmt(PostgreSQLParser::Schema_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariablesetstmt(PostgreSQLParser::VariablesetstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_rest(PostgreSQLParser::Set_restContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric_set(PostgreSQLParser::Generic_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_rest_more(PostgreSQLParser::Set_rest_moreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_name(PostgreSQLParser::Var_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_list(PostgreSQLParser::Var_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_value(PostgreSQLParser::Var_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIso_level(PostgreSQLParser::Iso_levelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolean_or_string_(PostgreSQLParser::Boolean_or_string_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_value(PostgreSQLParser::Zone_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEncoding_(PostgreSQLParser::Encoding_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNonreservedword_or_sconst(PostgreSQLParser::Nonreservedword_or_sconstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableresetstmt(PostgreSQLParser::VariableresetstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReset_rest(PostgreSQLParser::Reset_restContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric_reset(PostgreSQLParser::Generic_resetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetresetclause(PostgreSQLParser::SetresetclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionsetresetclause(PostgreSQLParser::FunctionsetresetclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableshowstmt(PostgreSQLParser::VariableshowstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraintssetstmt(PostgreSQLParser::ConstraintssetstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraints_set_list(PostgreSQLParser::Constraints_set_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraints_set_mode(PostgreSQLParser::Constraints_set_modeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCheckpointstmt(PostgreSQLParser::CheckpointstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDiscardstmt(PostgreSQLParser::DiscardstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAltertablestmt(PostgreSQLParser::AltertablestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_table_cmds(PostgreSQLParser::Alter_table_cmdsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartition_cmd(PostgreSQLParser::Partition_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_partition_cmd(PostgreSQLParser::Index_partition_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_table_cmd(PostgreSQLParser::Alter_table_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_column_default(PostgreSQLParser::Alter_column_defaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_behavior_(PostgreSQLParser::Drop_behavior_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCollate_clause_(PostgreSQLParser::Collate_clause_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_using(PostgreSQLParser::Alter_usingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReplica_identity(PostgreSQLParser::Replica_identityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReloptions(PostgreSQLParser::ReloptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReloptions_(PostgreSQLParser::Reloptions_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReloption_list(PostgreSQLParser::Reloption_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReloption_elem(PostgreSQLParser::Reloption_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_identity_column_option_list(PostgreSQLParser::Alter_identity_column_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_identity_column_option(PostgreSQLParser::Alter_identity_column_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionboundspec(PostgreSQLParser::PartitionboundspecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHash_partbound_elem(PostgreSQLParser::Hash_partbound_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHash_partbound(PostgreSQLParser::Hash_partboundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAltercompositetypestmt(PostgreSQLParser::AltercompositetypestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_type_cmds(PostgreSQLParser::Alter_type_cmdsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_type_cmd(PostgreSQLParser::Alter_type_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCloseportalstmt(PostgreSQLParser::CloseportalstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCopystmt(PostgreSQLParser::CopystmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCopy_from(PostgreSQLParser::Copy_fromContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgram_(PostgreSQLParser::Program_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCopy_file_name(PostgreSQLParser::Copy_file_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCopy_options(PostgreSQLParser::Copy_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCopy_opt_list(PostgreSQLParser::Copy_opt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCopy_opt_item(PostgreSQLParser::Copy_opt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinary_(PostgreSQLParser::Binary_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCopy_delimiter(PostgreSQLParser::Copy_delimiterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUsing_(PostgreSQLParser::Using_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCopy_generic_opt_list(PostgreSQLParser::Copy_generic_opt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCopy_generic_opt_elem(PostgreSQLParser::Copy_generic_opt_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCopy_generic_opt_arg(PostgreSQLParser::Copy_generic_opt_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCopy_generic_opt_arg_list(PostgreSQLParser::Copy_generic_opt_arg_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCopy_generic_opt_arg_list_item(PostgreSQLParser::Copy_generic_opt_arg_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatestmt(PostgreSQLParser::CreatestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpttemp(PostgreSQLParser::OpttempContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpttableelementlist(PostgreSQLParser::OpttableelementlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpttypedtableelementlist(PostgreSQLParser::OpttypedtableelementlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableelementlist(PostgreSQLParser::TableelementlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypedtableelementlist(PostgreSQLParser::TypedtableelementlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableelement(PostgreSQLParser::TableelementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypedtableelement(PostgreSQLParser::TypedtableelementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnDef(PostgreSQLParser::ColumnDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnOptions(PostgreSQLParser::ColumnOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColquallist(PostgreSQLParser::ColquallistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColconstraint(PostgreSQLParser::ColconstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColconstraintelem(PostgreSQLParser::ColconstraintelemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGenerated_when(PostgreSQLParser::Generated_whenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraintattr(PostgreSQLParser::ConstraintattrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablelikeclause(PostgreSQLParser::TablelikeclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablelikeoptionlist(PostgreSQLParser::TablelikeoptionlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablelikeoption(PostgreSQLParser::TablelikeoptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableconstraint(PostgreSQLParser::TableconstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraintelem(PostgreSQLParser::ConstraintelemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNo_inherit_(PostgreSQLParser::No_inherit_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_list_(PostgreSQLParser::Column_list_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnlist(PostgreSQLParser::ColumnlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnElem(PostgreSQLParser::ColumnElemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitC_include_(PostgreSQLParser::C_include_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKey_match(PostgreSQLParser::Key_matchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExclusionconstraintlist(PostgreSQLParser::ExclusionconstraintlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExclusionconstraintelem(PostgreSQLParser::ExclusionconstraintelemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExclusionwhereclause(PostgreSQLParser::ExclusionwhereclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKey_actions(PostgreSQLParser::Key_actionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKey_update(PostgreSQLParser::Key_updateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKey_delete(PostgreSQLParser::Key_deleteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKey_action(PostgreSQLParser::Key_actionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptinherit(PostgreSQLParser::OptinheritContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptpartitionspec(PostgreSQLParser::OptpartitionspecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionspec(PostgreSQLParser::PartitionspecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPart_params(PostgreSQLParser::Part_paramsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPart_elem(PostgreSQLParser::Part_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_access_method_clause(PostgreSQLParser::Table_access_method_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptwith(PostgreSQLParser::OptwithContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOncommitoption(PostgreSQLParser::OncommitoptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpttablespace(PostgreSQLParser::OpttablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptconstablespace(PostgreSQLParser::OptconstablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExistingindex(PostgreSQLParser::ExistingindexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatestatsstmt(PostgreSQLParser::CreatestatsstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterstatsstmt(PostgreSQLParser::AlterstatsstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateasstmt(PostgreSQLParser::CreateasstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_as_target(PostgreSQLParser::Create_as_targetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith_data_(PostgreSQLParser::With_data_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatematviewstmt(PostgreSQLParser::CreatematviewstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_mv_target(PostgreSQLParser::Create_mv_targetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptnolog(PostgreSQLParser::OptnologContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRefreshmatviewstmt(PostgreSQLParser::RefreshmatviewstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateseqstmt(PostgreSQLParser::CreateseqstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterseqstmt(PostgreSQLParser::AlterseqstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptseqoptlist(PostgreSQLParser::OptseqoptlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptparenthesizedseqoptlist(PostgreSQLParser::OptparenthesizedseqoptlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSeqoptlist(PostgreSQLParser::SeqoptlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSeqoptelem(PostgreSQLParser::SeqoptelemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBy_(PostgreSQLParser::By_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumericonly(PostgreSQLParser::NumericonlyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumericonly_list(PostgreSQLParser::Numericonly_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateplangstmt(PostgreSQLParser::CreateplangstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrusted_(PostgreSQLParser::Trusted_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHandler_name(PostgreSQLParser::Handler_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInline_handler_(PostgreSQLParser::Inline_handler_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValidator_clause(PostgreSQLParser::Validator_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValidator_(PostgreSQLParser::Validator_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedural_(PostgreSQLParser::Procedural_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatetablespacestmt(PostgreSQLParser::CreatetablespacestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpttablespaceowner(PostgreSQLParser::OpttablespaceownerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDroptablespacestmt(PostgreSQLParser::DroptablespacestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateextensionstmt(PostgreSQLParser::CreateextensionstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_extension_opt_list(PostgreSQLParser::Create_extension_opt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_extension_opt_item(PostgreSQLParser::Create_extension_opt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterextensionstmt(PostgreSQLParser::AlterextensionstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_extension_opt_list(PostgreSQLParser::Alter_extension_opt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_extension_opt_item(PostgreSQLParser::Alter_extension_opt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterextensioncontentsstmt(PostgreSQLParser::AlterextensioncontentsstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatefdwstmt(PostgreSQLParser::CreatefdwstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFdw_option(PostgreSQLParser::Fdw_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFdw_options(PostgreSQLParser::Fdw_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFdw_options_(PostgreSQLParser::Fdw_options_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterfdwstmt(PostgreSQLParser::AlterfdwstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_generic_options(PostgreSQLParser::Create_generic_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric_option_list(PostgreSQLParser::Generic_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_generic_options(PostgreSQLParser::Alter_generic_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_generic_option_list(PostgreSQLParser::Alter_generic_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_generic_option_elem(PostgreSQLParser::Alter_generic_option_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric_option_elem(PostgreSQLParser::Generic_option_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric_option_name(PostgreSQLParser::Generic_option_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric_option_arg(PostgreSQLParser::Generic_option_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateforeignserverstmt(PostgreSQLParser::CreateforeignserverstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_(PostgreSQLParser::Type_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForeign_server_version(PostgreSQLParser::Foreign_server_versionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForeign_server_version_(PostgreSQLParser::Foreign_server_version_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterforeignserverstmt(PostgreSQLParser::AlterforeignserverstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateforeigntablestmt(PostgreSQLParser::CreateforeigntablestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImportforeignschemastmt(PostgreSQLParser::ImportforeignschemastmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImport_qualification_type(PostgreSQLParser::Import_qualification_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImport_qualification(PostgreSQLParser::Import_qualificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateusermappingstmt(PostgreSQLParser::CreateusermappingstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAuth_ident(PostgreSQLParser::Auth_identContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropusermappingstmt(PostgreSQLParser::DropusermappingstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterusermappingstmt(PostgreSQLParser::AlterusermappingstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatepolicystmt(PostgreSQLParser::CreatepolicystmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterpolicystmt(PostgreSQLParser::AlterpolicystmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowsecurityoptionalexpr(PostgreSQLParser::RowsecurityoptionalexprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowsecurityoptionalwithcheck(PostgreSQLParser::RowsecurityoptionalwithcheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowsecuritydefaulttorole(PostgreSQLParser::RowsecuritydefaulttoroleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowsecurityoptionaltorole(PostgreSQLParser::RowsecurityoptionaltoroleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowsecuritydefaultpermissive(PostgreSQLParser::RowsecuritydefaultpermissiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowsecuritydefaultforcmd(PostgreSQLParser::RowsecuritydefaultforcmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow_security_cmd(PostgreSQLParser::Row_security_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateamstmt(PostgreSQLParser::CreateamstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAm_type(PostgreSQLParser::Am_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatetrigstmt(PostgreSQLParser::CreatetrigstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggeractiontime(PostgreSQLParser::TriggeractiontimeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggerevents(PostgreSQLParser::TriggereventsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggeroneevent(PostgreSQLParser::TriggeroneeventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggerreferencing(PostgreSQLParser::TriggerreferencingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggertransitions(PostgreSQLParser::TriggertransitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggertransition(PostgreSQLParser::TriggertransitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransitionoldornew(PostgreSQLParser::TransitionoldornewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransitionrowortable(PostgreSQLParser::TransitionrowortableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransitionrelname(PostgreSQLParser::TransitionrelnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggerforspec(PostgreSQLParser::TriggerforspecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggerforopteach(PostgreSQLParser::TriggerforopteachContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggerfortype(PostgreSQLParser::TriggerfortypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggerwhen(PostgreSQLParser::TriggerwhenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_or_procedure(PostgreSQLParser::Function_or_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggerfuncargs(PostgreSQLParser::TriggerfuncargsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggerfuncarg(PostgreSQLParser::TriggerfuncargContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptconstrfromtable(PostgreSQLParser::OptconstrfromtableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraintattributespec(PostgreSQLParser::ConstraintattributespecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraintattributeElem(PostgreSQLParser::ConstraintattributeElemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateeventtrigstmt(PostgreSQLParser::CreateeventtrigstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent_trigger_when_list(PostgreSQLParser::Event_trigger_when_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent_trigger_when_item(PostgreSQLParser::Event_trigger_when_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent_trigger_value_list(PostgreSQLParser::Event_trigger_value_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAltereventtrigstmt(PostgreSQLParser::AltereventtrigstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnable_trigger(PostgreSQLParser::Enable_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateassertionstmt(PostgreSQLParser::CreateassertionstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinestmt(PostgreSQLParser::DefinestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinition(PostgreSQLParser::DefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDef_list(PostgreSQLParser::Def_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDef_elem(PostgreSQLParser::Def_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDef_arg(PostgreSQLParser::Def_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOld_aggr_definition(PostgreSQLParser::Old_aggr_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOld_aggr_list(PostgreSQLParser::Old_aggr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOld_aggr_elem(PostgreSQLParser::Old_aggr_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnum_val_list_(PostgreSQLParser::Enum_val_list_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnum_val_list(PostgreSQLParser::Enum_val_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterenumstmt(PostgreSQLParser::AlterenumstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_not_exists_(PostgreSQLParser::If_not_exists_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateopclassstmt(PostgreSQLParser::CreateopclassstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpclass_item_list(PostgreSQLParser::Opclass_item_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpclass_item(PostgreSQLParser::Opclass_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefault_(PostgreSQLParser::Default_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpfamily_(PostgreSQLParser::Opfamily_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpclass_purpose(PostgreSQLParser::Opclass_purposeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecheck_(PostgreSQLParser::Recheck_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateopfamilystmt(PostgreSQLParser::CreateopfamilystmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlteropfamilystmt(PostgreSQLParser::AlteropfamilystmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpclass_drop_list(PostgreSQLParser::Opclass_drop_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpclass_drop(PostgreSQLParser::Opclass_dropContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropopclassstmt(PostgreSQLParser::DropopclassstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropopfamilystmt(PostgreSQLParser::DropopfamilystmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropownedstmt(PostgreSQLParser::DropownedstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReassignownedstmt(PostgreSQLParser::ReassignownedstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropstmt(PostgreSQLParser::DropstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObject_type_any_name(PostgreSQLParser::Object_type_any_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObject_type_name(PostgreSQLParser::Object_type_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_type_name(PostgreSQLParser::Drop_type_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObject_type_name_on_any_name(PostgreSQLParser::Object_type_name_on_any_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAny_name_list_(PostgreSQLParser::Any_name_list_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAny_name(PostgreSQLParser::Any_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttrs(PostgreSQLParser::AttrsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_name_list(PostgreSQLParser::Type_name_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTruncatestmt(PostgreSQLParser::TruncatestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRestart_seqs_(PostgreSQLParser::Restart_seqs_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommentstmt(PostgreSQLParser::CommentstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComment_text(PostgreSQLParser::Comment_textContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSeclabelstmt(PostgreSQLParser::SeclabelstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProvider_(PostgreSQLParser::Provider_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSecurity_label(PostgreSQLParser::Security_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFetchstmt(PostgreSQLParser::FetchstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFetch_args(PostgreSQLParser::Fetch_argsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrom_in(PostgreSQLParser::From_inContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrom_in_(PostgreSQLParser::From_in_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrantstmt(PostgreSQLParser::GrantstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevokestmt(PostgreSQLParser::RevokestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrivileges(PostgreSQLParser::PrivilegesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrivilege_list(PostgreSQLParser::Privilege_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrivilege(PostgreSQLParser::PrivilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrivilege_target(PostgreSQLParser::Privilege_targetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrantee_list(PostgreSQLParser::Grantee_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrantee(PostgreSQLParser::GranteeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_grant_option_(PostgreSQLParser::Grant_grant_option_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrantrolestmt(PostgreSQLParser::GrantrolestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevokerolestmt(PostgreSQLParser::RevokerolestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_admin_option_(PostgreSQLParser::Grant_admin_option_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGranted_by_(PostgreSQLParser::Granted_by_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterdefaultprivilegesstmt(PostgreSQLParser::AlterdefaultprivilegesstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefacloptionlist(PostgreSQLParser::DefacloptionlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefacloption(PostgreSQLParser::DefacloptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaclaction(PostgreSQLParser::DefaclactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefacl_privilege_target(PostgreSQLParser::Defacl_privilege_targetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndexstmt(PostgreSQLParser::IndexstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnique_(PostgreSQLParser::Unique_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNulls_distinct(PostgreSQLParser::Nulls_distinctContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingle_name_(PostgreSQLParser::Single_name_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConcurrently_(PostgreSQLParser::Concurrently_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_name_(PostgreSQLParser::Index_name_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccess_method_clause(PostgreSQLParser::Access_method_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_params(PostgreSQLParser::Index_paramsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_elem_options(PostgreSQLParser::Index_elem_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_elem(PostgreSQLParser::Index_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclude_(PostgreSQLParser::Include_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_including_params(PostgreSQLParser::Index_including_paramsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCollate_(PostgreSQLParser::Collate_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_(PostgreSQLParser::Class_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAsc_desc_(PostgreSQLParser::Asc_desc_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNulls_order_(PostgreSQLParser::Nulls_order_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatefunctionstmt(PostgreSQLParser::CreatefunctionstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOr_replace_(PostgreSQLParser::Or_replace_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_args(PostgreSQLParser::Func_argsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_args_list(PostgreSQLParser::Func_args_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_with_argtypes_list(PostgreSQLParser::Function_with_argtypes_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_with_argtypes(PostgreSQLParser::Function_with_argtypesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_args_with_defaults(PostgreSQLParser::Func_args_with_defaultsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_args_with_defaults_list(PostgreSQLParser::Func_args_with_defaults_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_arg(PostgreSQLParser::Func_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArg_class(PostgreSQLParser::Arg_classContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam_name(PostgreSQLParser::Param_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_return(PostgreSQLParser::Func_returnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_type(PostgreSQLParser::Func_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_arg_with_default(PostgreSQLParser::Func_arg_with_defaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggr_arg(PostgreSQLParser::Aggr_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggr_args(PostgreSQLParser::Aggr_argsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggr_args_list(PostgreSQLParser::Aggr_args_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggregate_with_argtypes(PostgreSQLParser::Aggregate_with_argtypesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggregate_with_argtypes_list(PostgreSQLParser::Aggregate_with_argtypes_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatefunc_opt_list(PostgreSQLParser::Createfunc_opt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommon_func_opt_item(PostgreSQLParser::Common_func_opt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatefunc_opt_item(PostgreSQLParser::Createfunc_opt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_as(PostgreSQLParser::Func_asContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransform_type_list(PostgreSQLParser::Transform_type_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinition_(PostgreSQLParser::Definition_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_func_column(PostgreSQLParser::Table_func_columnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_func_column_list(PostgreSQLParser::Table_func_column_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterfunctionstmt(PostgreSQLParser::AlterfunctionstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterfunc_opt_list(PostgreSQLParser::Alterfunc_opt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRestrict_(PostgreSQLParser::Restrict_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRemovefuncstmt(PostgreSQLParser::RemovefuncstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRemoveaggrstmt(PostgreSQLParser::RemoveaggrstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRemoveoperstmt(PostgreSQLParser::RemoveoperstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOper_argtypes(PostgreSQLParser::Oper_argtypesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAny_operator(PostgreSQLParser::Any_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator_with_argtypes_list(PostgreSQLParser::Operator_with_argtypes_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator_with_argtypes(PostgreSQLParser::Operator_with_argtypesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDostmt(PostgreSQLParser::DostmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDostmt_opt_list(PostgreSQLParser::Dostmt_opt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDostmt_opt_item(PostgreSQLParser::Dostmt_opt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatecaststmt(PostgreSQLParser::CreatecaststmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCast_context(PostgreSQLParser::Cast_contextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropcaststmt(PostgreSQLParser::DropcaststmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_exists_(PostgreSQLParser::If_exists_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatetransformstmt(PostgreSQLParser::CreatetransformstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransform_element_list(PostgreSQLParser::Transform_element_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDroptransformstmt(PostgreSQLParser::DroptransformstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReindexstmt(PostgreSQLParser::ReindexstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReindex_target_relation(PostgreSQLParser::Reindex_target_relationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReindex_target_all(PostgreSQLParser::Reindex_target_allContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReindex_option_list(PostgreSQLParser::Reindex_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAltertblspcstmt(PostgreSQLParser::AltertblspcstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRenamestmt(PostgreSQLParser::RenamestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_(PostgreSQLParser::Column_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_data_(PostgreSQLParser::Set_data_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterobjectdependsstmt(PostgreSQLParser::AlterobjectdependsstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNo_(PostgreSQLParser::No_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterobjectschemastmt(PostgreSQLParser::AlterobjectschemastmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlteroperatorstmt(PostgreSQLParser::AlteroperatorstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator_def_list(PostgreSQLParser::Operator_def_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator_def_elem(PostgreSQLParser::Operator_def_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator_def_arg(PostgreSQLParser::Operator_def_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAltertypestmt(PostgreSQLParser::AltertypestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterownerstmt(PostgreSQLParser::AlterownerstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatepublicationstmt(PostgreSQLParser::CreatepublicationstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPublication_for_tables_(PostgreSQLParser::Publication_for_tables_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPublication_for_tables(PostgreSQLParser::Publication_for_tablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterpublicationstmt(PostgreSQLParser::AlterpublicationstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatesubscriptionstmt(PostgreSQLParser::CreatesubscriptionstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPublication_name_list(PostgreSQLParser::Publication_name_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPublication_name_item(PostgreSQLParser::Publication_name_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAltersubscriptionstmt(PostgreSQLParser::AltersubscriptionstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropsubscriptionstmt(PostgreSQLParser::DropsubscriptionstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRulestmt(PostgreSQLParser::RulestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRuleactionlist(PostgreSQLParser::RuleactionlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRuleactionmulti(PostgreSQLParser::RuleactionmultiContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRuleactionstmt(PostgreSQLParser::RuleactionstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRuleactionstmtOrEmpty(PostgreSQLParser::RuleactionstmtOrEmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent(PostgreSQLParser::EventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstead_(PostgreSQLParser::Instead_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotifystmt(PostgreSQLParser::NotifystmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotify_payload(PostgreSQLParser::Notify_payloadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitListenstmt(PostgreSQLParser::ListenstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnlistenstmt(PostgreSQLParser::UnlistenstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransactionstmt(PostgreSQLParser::TransactionstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransaction_(PostgreSQLParser::Transaction_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransaction_mode_item(PostgreSQLParser::Transaction_mode_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransaction_mode_list(PostgreSQLParser::Transaction_mode_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransaction_mode_list_or_empty(PostgreSQLParser::Transaction_mode_list_or_emptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransaction_chain_(PostgreSQLParser::Transaction_chain_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitViewstmt(PostgreSQLParser::ViewstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCheck_option_(PostgreSQLParser::Check_option_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoadstmt(PostgreSQLParser::LoadstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatedbstmt(PostgreSQLParser::CreatedbstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatedb_opt_list(PostgreSQLParser::Createdb_opt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatedb_opt_items(PostgreSQLParser::Createdb_opt_itemsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatedb_opt_item(PostgreSQLParser::Createdb_opt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatedb_opt_name(PostgreSQLParser::Createdb_opt_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqual_(PostgreSQLParser::Equal_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterdatabasestmt(PostgreSQLParser::AlterdatabasestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterdatabasesetstmt(PostgreSQLParser::AlterdatabasesetstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropdbstmt(PostgreSQLParser::DropdbstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_option_list(PostgreSQLParser::Drop_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_option(PostgreSQLParser::Drop_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAltercollationstmt(PostgreSQLParser::AltercollationstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAltersystemstmt(PostgreSQLParser::AltersystemstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatedomainstmt(PostgreSQLParser::CreatedomainstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterdomainstmt(PostgreSQLParser::AlterdomainstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAs_(PostgreSQLParser::As_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAltertsdictionarystmt(PostgreSQLParser::AltertsdictionarystmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAltertsconfigurationstmt(PostgreSQLParser::AltertsconfigurationstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAny_with(PostgreSQLParser::Any_withContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateconversionstmt(PostgreSQLParser::CreateconversionstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClusterstmt(PostgreSQLParser::ClusterstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCluster_index_specification(PostgreSQLParser::Cluster_index_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVacuumstmt(PostgreSQLParser::VacuumstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnalyzestmt(PostgreSQLParser::AnalyzestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUtility_option_list(PostgreSQLParser::Utility_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVac_analyze_option_list(PostgreSQLParser::Vac_analyze_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnalyze_keyword(PostgreSQLParser::Analyze_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUtility_option_elem(PostgreSQLParser::Utility_option_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUtility_option_name(PostgreSQLParser::Utility_option_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUtility_option_arg(PostgreSQLParser::Utility_option_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVac_analyze_option_elem(PostgreSQLParser::Vac_analyze_option_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVac_analyze_option_name(PostgreSQLParser::Vac_analyze_option_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVac_analyze_option_arg(PostgreSQLParser::Vac_analyze_option_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnalyze_(PostgreSQLParser::Analyze_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVerbose_(PostgreSQLParser::Verbose_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFull_(PostgreSQLParser::Full_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFreeze_(PostgreSQLParser::Freeze_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitName_list_(PostgreSQLParser::Name_list_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVacuum_relation(PostgreSQLParser::Vacuum_relationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVacuum_relation_list(PostgreSQLParser::Vacuum_relation_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVacuum_relation_list_(PostgreSQLParser::Vacuum_relation_list_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplainstmt(PostgreSQLParser::ExplainstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplainablestmt(PostgreSQLParser::ExplainablestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplain_option_list(PostgreSQLParser::Explain_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplain_option_elem(PostgreSQLParser::Explain_option_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplain_option_name(PostgreSQLParser::Explain_option_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplain_option_arg(PostgreSQLParser::Explain_option_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPreparestmt(PostgreSQLParser::PreparestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrep_type_clause(PostgreSQLParser::Prep_type_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPreparablestmt(PostgreSQLParser::PreparablestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecutestmt(PostgreSQLParser::ExecutestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_param_clause(PostgreSQLParser::Execute_param_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeallocatestmt(PostgreSQLParser::DeallocatestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsertstmt(PostgreSQLParser::InsertstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsert_target(PostgreSQLParser::Insert_targetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsert_rest(PostgreSQLParser::Insert_restContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOverride_kind(PostgreSQLParser::Override_kindContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsert_column_list(PostgreSQLParser::Insert_column_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsert_column_item(PostgreSQLParser::Insert_column_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOn_conflict_(PostgreSQLParser::On_conflict_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConf_expr_(PostgreSQLParser::Conf_expr_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturning_clause(PostgreSQLParser::Returning_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMergestmt(PostgreSQLParser::MergestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMerge_insert_clause(PostgreSQLParser::Merge_insert_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMerge_update_clause(PostgreSQLParser::Merge_update_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMerge_delete_clause(PostgreSQLParser::Merge_delete_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeletestmt(PostgreSQLParser::DeletestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUsing_clause(PostgreSQLParser::Using_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLockstmt(PostgreSQLParser::LockstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLock_(PostgreSQLParser::Lock_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLock_type(PostgreSQLParser::Lock_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNowait_(PostgreSQLParser::Nowait_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNowait_or_skip_(PostgreSQLParser::Nowait_or_skip_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdatestmt(PostgreSQLParser::UpdatestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_clause_list(PostgreSQLParser::Set_clause_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_clause(PostgreSQLParser::Set_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_target(PostgreSQLParser::Set_targetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_target_list(PostgreSQLParser::Set_target_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarecursorstmt(PostgreSQLParser::DeclarecursorstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCursor_name(PostgreSQLParser::Cursor_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCursor_options(PostgreSQLParser::Cursor_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHold_(PostgreSQLParser::Hold_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectstmt(PostgreSQLParser::SelectstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_with_parens(PostgreSQLParser::Select_with_parensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_no_parens(PostgreSQLParser::Select_no_parensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_clause(PostgreSQLParser::Select_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_select_intersect(PostgreSQLParser::Simple_select_intersectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_select_pramary(PostgreSQLParser::Simple_select_pramaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith_clause(PostgreSQLParser::With_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCte_list(PostgreSQLParser::Cte_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommon_table_expr(PostgreSQLParser::Common_table_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMaterialized_(PostgreSQLParser::Materialized_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith_clause_(PostgreSQLParser::With_clause_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInto_clause(PostgreSQLParser::Into_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStrict_(PostgreSQLParser::Strict_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpttempTableName(PostgreSQLParser::OpttempTableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_(PostgreSQLParser::Table_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAll_or_distinct(PostgreSQLParser::All_or_distinctContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDistinct_clause(PostgreSQLParser::Distinct_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAll_clause_(PostgreSQLParser::All_clause_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSort_clause_(PostgreSQLParser::Sort_clause_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSort_clause(PostgreSQLParser::Sort_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSortby_list(PostgreSQLParser::Sortby_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSortby(PostgreSQLParser::SortbyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_limit(PostgreSQLParser::Select_limitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_limit_(PostgreSQLParser::Select_limit_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLimit_clause(PostgreSQLParser::Limit_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOffset_clause(PostgreSQLParser::Offset_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_limit_value(PostgreSQLParser::Select_limit_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_offset_value(PostgreSQLParser::Select_offset_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_fetch_first_value(PostgreSQLParser::Select_fetch_first_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitI_or_f_const(PostgreSQLParser::I_or_f_constContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow_or_rows(PostgreSQLParser::Row_or_rowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFirst_or_next(PostgreSQLParser::First_or_nextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_clause(PostgreSQLParser::Group_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_by_list(PostgreSQLParser::Group_by_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_by_item(PostgreSQLParser::Group_by_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmpty_grouping_set(PostgreSQLParser::Empty_grouping_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRollup_clause(PostgreSQLParser::Rollup_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCube_clause(PostgreSQLParser::Cube_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrouping_sets_clause(PostgreSQLParser::Grouping_sets_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHaving_clause(PostgreSQLParser::Having_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_locking_clause(PostgreSQLParser::For_locking_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_locking_clause_(PostgreSQLParser::For_locking_clause_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_locking_items(PostgreSQLParser::For_locking_itemsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_locking_item(PostgreSQLParser::For_locking_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_locking_strength(PostgreSQLParser::For_locking_strengthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocked_rels_list(PostgreSQLParser::Locked_rels_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValues_clause(PostgreSQLParser::Values_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrom_clause(PostgreSQLParser::From_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrom_list(PostgreSQLParser::From_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_ref(PostgreSQLParser::Table_refContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlias_clause(PostgreSQLParser::Alias_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_alias_clause(PostgreSQLParser::Func_alias_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoin_type(PostgreSQLParser::Join_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoin_qual(PostgreSQLParser::Join_qualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelation_expr(PostgreSQLParser::Relation_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelation_expr_list(PostgreSQLParser::Relation_expr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelation_expr_opt_alias(PostgreSQLParser::Relation_expr_opt_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablesample_clause(PostgreSQLParser::Tablesample_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepeatable_clause_(PostgreSQLParser::Repeatable_clause_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_table(PostgreSQLParser::Func_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowsfrom_item(PostgreSQLParser::Rowsfrom_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowsfrom_list(PostgreSQLParser::Rowsfrom_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCol_def_list_(PostgreSQLParser::Col_def_list_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrdinality_(PostgreSQLParser::Ordinality_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhere_clause(PostgreSQLParser::Where_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhere_or_current_clause(PostgreSQLParser::Where_or_current_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpttablefuncelementlist(PostgreSQLParser::OpttablefuncelementlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablefuncelementlist(PostgreSQLParser::TablefuncelementlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablefuncelement(PostgreSQLParser::TablefuncelementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXmltable(PostgreSQLParser::XmltableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXmltable_column_list(PostgreSQLParser::Xmltable_column_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXmltable_column_el(PostgreSQLParser::Xmltable_column_elContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXmltable_column_option_list(PostgreSQLParser::Xmltable_column_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXmltable_column_option_el(PostgreSQLParser::Xmltable_column_option_elContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_namespace_list(PostgreSQLParser::Xml_namespace_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_namespace_el(PostgreSQLParser::Xml_namespace_elContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypename(PostgreSQLParser::TypenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpt_array_bounds(PostgreSQLParser::Opt_array_boundsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpletypename(PostgreSQLParser::SimpletypenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConsttypename(PostgreSQLParser::ConsttypenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGenerictype(PostgreSQLParser::GenerictypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_modifiers_(PostgreSQLParser::Type_modifiers_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumeric(PostgreSQLParser::NumericContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloat_(PostgreSQLParser::Float_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBit(PostgreSQLParser::BitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstbit(PostgreSQLParser::ConstbitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitwithlength(PostgreSQLParser::BitwithlengthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitwithoutlength(PostgreSQLParser::BitwithoutlengthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharacter(PostgreSQLParser::CharacterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstcharacter(PostgreSQLParser::ConstcharacterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharacter_c(PostgreSQLParser::Character_cContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarying_(PostgreSQLParser::Varying_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstdatetime(PostgreSQLParser::ConstdatetimeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstinterval(PostgreSQLParser::ConstintervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTimezone_(PostgreSQLParser::Timezone_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterval_(PostgreSQLParser::Interval_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterval_second(PostgreSQLParser::Interval_secondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJsonType(PostgreSQLParser::JsonTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEscape_(PostgreSQLParser::Escape_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr(PostgreSQLParser::A_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_qual(PostgreSQLParser::A_expr_qualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_lessless(PostgreSQLParser::A_expr_lesslessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_or(PostgreSQLParser::A_expr_orContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_and(PostgreSQLParser::A_expr_andContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_between(PostgreSQLParser::A_expr_betweenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_in(PostgreSQLParser::A_expr_inContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_unary_not(PostgreSQLParser::A_expr_unary_notContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_isnull(PostgreSQLParser::A_expr_isnullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_is_not(PostgreSQLParser::A_expr_is_notContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_compare(PostgreSQLParser::A_expr_compareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_like(PostgreSQLParser::A_expr_likeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_qual_op(PostgreSQLParser::A_expr_qual_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_unary_qualop(PostgreSQLParser::A_expr_unary_qualopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_add(PostgreSQLParser::A_expr_addContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_mul(PostgreSQLParser::A_expr_mulContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_caret(PostgreSQLParser::A_expr_caretContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_unary_sign(PostgreSQLParser::A_expr_unary_signContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_at_time_zone(PostgreSQLParser::A_expr_at_time_zoneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_collate(PostgreSQLParser::A_expr_collateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitA_expr_typecast(PostgreSQLParser::A_expr_typecastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitB_expr(PostgreSQLParser::B_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitC_expr_exists(PostgreSQLParser::C_expr_existsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitC_expr_expr(PostgreSQLParser::C_expr_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitC_expr_case(PostgreSQLParser::C_expr_caseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlsqlvariablename(PostgreSQLParser::PlsqlvariablenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_application(PostgreSQLParser::Func_applicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_expr(PostgreSQLParser::Func_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_expr_windowless(PostgreSQLParser::Func_expr_windowlessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_expr_common_subexpr(PostgreSQLParser::Func_expr_common_subexprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_root_version(PostgreSQLParser::Xml_root_versionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_root_standalone_(PostgreSQLParser::Xml_root_standalone_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_attributes(PostgreSQLParser::Xml_attributesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_attribute_list(PostgreSQLParser::Xml_attribute_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_attribute_el(PostgreSQLParser::Xml_attribute_elContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDocument_or_content(PostgreSQLParser::Document_or_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_whitespace_option(PostgreSQLParser::Xml_whitespace_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXmlexists_argument(PostgreSQLParser::Xmlexists_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_passing_mech(PostgreSQLParser::Xml_passing_mechContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWithin_group_clause(PostgreSQLParser::Within_group_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFilter_clause(PostgreSQLParser::Filter_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_clause(PostgreSQLParser::Window_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_definition_list(PostgreSQLParser::Window_definition_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_definition(PostgreSQLParser::Window_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOver_clause(PostgreSQLParser::Over_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_specification(PostgreSQLParser::Window_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExisting_window_name_(PostgreSQLParser::Existing_window_name_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartition_clause_(PostgreSQLParser::Partition_clause_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrame_clause_(PostgreSQLParser::Frame_clause_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrame_extent(PostgreSQLParser::Frame_extentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrame_bound(PostgreSQLParser::Frame_boundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_exclusion_clause_(PostgreSQLParser::Window_exclusion_clause_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow(PostgreSQLParser::RowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplicit_row(PostgreSQLParser::Explicit_rowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplicit_row(PostgreSQLParser::Implicit_rowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSub_type(PostgreSQLParser::Sub_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAll_op(PostgreSQLParser::All_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMathop(PostgreSQLParser::MathopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQual_op(PostgreSQLParser::Qual_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQual_all_op(PostgreSQLParser::Qual_all_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubquery_Op(PostgreSQLParser::Subquery_OpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_list(PostgreSQLParser::Expr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_arg_list(PostgreSQLParser::Func_arg_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_arg_expr(PostgreSQLParser::Func_arg_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_list(PostgreSQLParser::Type_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_expr(PostgreSQLParser::Array_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_expr_list(PostgreSQLParser::Array_expr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtract_list(PostgreSQLParser::Extract_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtract_arg(PostgreSQLParser::Extract_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnicode_normal_form(PostgreSQLParser::Unicode_normal_formContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOverlay_list(PostgreSQLParser::Overlay_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPosition_list(PostgreSQLParser::Position_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubstr_list(PostgreSQLParser::Substr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrim_list(PostgreSQLParser::Trim_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIn_expr_select(PostgreSQLParser::In_expr_selectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIn_expr_list(PostgreSQLParser::In_expr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase_expr(PostgreSQLParser::Case_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhen_clause_list(PostgreSQLParser::When_clause_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhen_clause(PostgreSQLParser::When_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase_default(PostgreSQLParser::Case_defaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase_arg(PostgreSQLParser::Case_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnref(PostgreSQLParser::ColumnrefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndirection_el(PostgreSQLParser::Indirection_elContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSlice_bound_(PostgreSQLParser::Slice_bound_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndirection(PostgreSQLParser::IndirectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpt_indirection(PostgreSQLParser::Opt_indirectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_passing_clause(PostgreSQLParser::Json_passing_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_arguments(PostgreSQLParser::Json_argumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_argument(PostgreSQLParser::Json_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_wrapper_behavior(PostgreSQLParser::Json_wrapper_behaviorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_behavior(PostgreSQLParser::Json_behaviorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_behavior_type(PostgreSQLParser::Json_behavior_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_behavior_clause(PostgreSQLParser::Json_behavior_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_on_error_clause(PostgreSQLParser::Json_on_error_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_value_expr(PostgreSQLParser::Json_value_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_format_clause(PostgreSQLParser::Json_format_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_quotes_clause(PostgreSQLParser::Json_quotes_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_returning_clause(PostgreSQLParser::Json_returning_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_predicate_type_constraint(PostgreSQLParser::Json_predicate_type_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_key_uniqueness_constraint(PostgreSQLParser::Json_key_uniqueness_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_name_and_value_list(PostgreSQLParser::Json_name_and_value_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_name_and_value(PostgreSQLParser::Json_name_and_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_object_constructor_null_clause(PostgreSQLParser::Json_object_constructor_null_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_array_constructor_null_clause(PostgreSQLParser::Json_array_constructor_null_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_value_expr_list(PostgreSQLParser::Json_value_expr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_aggregate_func(PostgreSQLParser::Json_aggregate_funcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJson_array_aggregate_order_by_clause(PostgreSQLParser::Json_array_aggregate_order_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTarget_list_(PostgreSQLParser::Target_list_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTarget_list(PostgreSQLParser::Target_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTarget_label(PostgreSQLParser::Target_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTarget_star(PostgreSQLParser::Target_starContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualified_name_list(PostgreSQLParser::Qualified_name_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualified_name(PostgreSQLParser::Qualified_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitName_list(PostgreSQLParser::Name_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitName(PostgreSQLParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttr_name(PostgreSQLParser::Attr_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_name(PostgreSQLParser::File_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_name(PostgreSQLParser::Func_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAexprconst(PostgreSQLParser::AexprconstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXconst(PostgreSQLParser::XconstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBconst(PostgreSQLParser::BconstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFconst(PostgreSQLParser::FconstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIconst(PostgreSQLParser::IconstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSconst(PostgreSQLParser::SconstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnysconst(PostgreSQLParser::AnysconstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUescape_(PostgreSQLParser::Uescape_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSignediconst(PostgreSQLParser::SignediconstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRoleid(PostgreSQLParser::RoleidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRolespec(PostgreSQLParser::RolespecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRole_list(PostgreSQLParser::Role_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColid(PostgreSQLParser::ColidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_function_name(PostgreSQLParser::Type_function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNonreservedword(PostgreSQLParser::NonreservedwordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColLabel(PostgreSQLParser::ColLabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBareColLabel(PostgreSQLParser::BareColLabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnreserved_keyword(PostgreSQLParser::Unreserved_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCol_name_keyword(PostgreSQLParser::Col_name_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_func_name_keyword(PostgreSQLParser::Type_func_name_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReserved_keyword(PostgreSQLParser::Reserved_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBare_label_keyword(PostgreSQLParser::Bare_label_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAny_identifier(PostgreSQLParser::Any_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(PostgreSQLParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpptest
