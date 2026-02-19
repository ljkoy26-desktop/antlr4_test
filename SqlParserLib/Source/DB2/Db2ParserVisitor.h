
// Generated from Db2Parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "Db2Parser.h"


namespace antlrcpp_db2 {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by Db2Parser.
 */
class  Db2ParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Db2Parser.
   */
    virtual std::any visitDb2_file(Db2Parser::Db2_fileContext *context) = 0;

    virtual std::any visitBatch(Db2Parser::BatchContext *context) = 0;

    virtual std::any visitSql_statement(Db2Parser::Sql_statementContext *context) = 0;

    virtual std::any visitSql_schema_statement(Db2Parser::Sql_schema_statementContext *context) = 0;

    virtual std::any visitSql_data_change_statement(Db2Parser::Sql_data_change_statementContext *context) = 0;

    virtual std::any visitSql_data_statement(Db2Parser::Sql_data_statementContext *context) = 0;

    virtual std::any visitSql_transaction_statement(Db2Parser::Sql_transaction_statementContext *context) = 0;

    virtual std::any visitSql_connection_statement(Db2Parser::Sql_connection_statementContext *context) = 0;

    virtual std::any visitSql_dynamic_statement(Db2Parser::Sql_dynamic_statementContext *context) = 0;

    virtual std::any visitSql_session_statement(Db2Parser::Sql_session_statementContext *context) = 0;

    virtual std::any visitSql_embedded_host_language_statement(Db2Parser::Sql_embedded_host_language_statementContext *context) = 0;

    virtual std::any visitSql_constrol_statement(Db2Parser::Sql_constrol_statementContext *context) = 0;

    virtual std::any visitSelect_statement(Db2Parser::Select_statementContext *context) = 0;

    virtual std::any visitRead_only_clause(Db2Parser::Read_only_clauseContext *context) = 0;

    virtual std::any visitUpdate_clause(Db2Parser::Update_clauseContext *context) = 0;

    virtual std::any visitOptimize_for_clause(Db2Parser::Optimize_for_clauseContext *context) = 0;

    virtual std::any visitConcurrent_access_resolution_clause(Db2Parser::Concurrent_access_resolution_clauseContext *context) = 0;

    virtual std::any visitDelete_statement(Db2Parser::Delete_statementContext *context) = 0;

    virtual std::any visitDelete_statement_searched_delete(Db2Parser::Delete_statement_searched_deleteContext *context) = 0;

    virtual std::any visitTable_or_view_name(Db2Parser::Table_or_view_nameContext *context) = 0;

    virtual std::any visitDelete_statement_positioned_delete(Db2Parser::Delete_statement_positioned_deleteContext *context) = 0;

    virtual std::any visitDelete_deltalake_statement(Db2Parser::Delete_deltalake_statementContext *context) = 0;

    virtual std::any visitInsert_statement(Db2Parser::Insert_statementContext *context) = 0;

    virtual std::any visitInsert_datalake_statement(Db2Parser::Insert_datalake_statementContext *context) = 0;

    virtual std::any visitValues_item(Db2Parser::Values_itemContext *context) = 0;

    virtual std::any visitMerge_statement(Db2Parser::Merge_statementContext *context) = 0;

    virtual std::any visitTable_view_fullselect(Db2Parser::Table_view_fullselectContext *context) = 0;

    virtual std::any visitCommon_table_expression_list(Db2Parser::Common_table_expression_listContext *context) = 0;

    virtual std::any visitMatching_condition(Db2Parser::Matching_conditionContext *context) = 0;

    virtual std::any visitModification_operation(Db2Parser::Modification_operationContext *context) = 0;

    virtual std::any visitUpdate_operation(Db2Parser::Update_operationContext *context) = 0;

    virtual std::any visitDelete_operation(Db2Parser::Delete_operationContext *context) = 0;

    virtual std::any visitInsert_operation(Db2Parser::Insert_operationContext *context) = 0;

    virtual std::any visitExpr_null_default_list(Db2Parser::Expr_null_default_listContext *context) = 0;

    virtual std::any visitIsolation_level(Db2Parser::Isolation_levelContext *context) = 0;

    virtual std::any visitTruncate_statement(Db2Parser::Truncate_statementContext *context) = 0;

    virtual std::any visitUpdate_statement(Db2Parser::Update_statementContext *context) = 0;

    virtual std::any visitUpdate_statement_searched_update(Db2Parser::Update_statement_searched_updateContext *context) = 0;

    virtual std::any visitSkip_wait(Db2Parser::Skip_waitContext *context) = 0;

    virtual std::any visitUpdate_statement_positioned_update(Db2Parser::Update_statement_positioned_updateContext *context) = 0;

    virtual std::any visitInclude_columns(Db2Parser::Include_columnsContext *context) = 0;

    virtual std::any visitAssignment_clause(Db2Parser::Assignment_clauseContext *context) = 0;

    virtual std::any visitAssignment_item(Db2Parser::Assignment_itemContext *context) = 0;

    virtual std::any visitPeriod_clause(Db2Parser::Period_clauseContext *context) = 0;

    virtual std::any visitTime_sec(Db2Parser::Time_secContext *context) = 0;

    virtual std::any visitUpdate_datalake_statement(Db2Parser::Update_datalake_statementContext *context) = 0;

    virtual std::any visitGrant_database_authorities_statement(Db2Parser::Grant_database_authorities_statementContext *context) = 0;

    virtual std::any visitDb_privilege_list(Db2Parser::Db_privilege_listContext *context) = 0;

    virtual std::any visitDb_privilege(Db2Parser::Db_privilegeContext *context) = 0;

    virtual std::any visitGrantee(Db2Parser::GranteeContext *context) = 0;

    virtual std::any visitGrantee_user_group(Db2Parser::Grantee_user_groupContext *context) = 0;

    virtual std::any visitUser_group(Db2Parser::User_groupContext *context) = 0;

    virtual std::any visitGrantee_list(Db2Parser::Grantee_listContext *context) = 0;

    virtual std::any visitGrantee_list_public(Db2Parser::Grantee_list_publicContext *context) = 0;

    virtual std::any visitGrantee_list_user_group(Db2Parser::Grantee_list_user_groupContext *context) = 0;

    virtual std::any visitGrant_exemption_statement(Db2Parser::Grant_exemption_statementContext *context) = 0;

    virtual std::any visitExemption_privilege(Db2Parser::Exemption_privilegeContext *context) = 0;

    virtual std::any visitGrant_global_variable_privileges_statement(Db2Parser::Grant_global_variable_privileges_statementContext *context) = 0;

    virtual std::any visitVariable_privilege(Db2Parser::Variable_privilegeContext *context) = 0;

    virtual std::any visitRead_write(Db2Parser::Read_writeContext *context) = 0;

    virtual std::any visitWith_grant_option(Db2Parser::With_grant_optionContext *context) = 0;

    virtual std::any visitGrant_index_privileges_statement(Db2Parser::Grant_index_privileges_statementContext *context) = 0;

    virtual std::any visitGrant_module_privileges_statement(Db2Parser::Grant_module_privileges_statementContext *context) = 0;

    virtual std::any visitGrant_package_privileges_statement(Db2Parser::Grant_package_privileges_statementContext *context) = 0;

    virtual std::any visitPackage_privilege_list(Db2Parser::Package_privilege_listContext *context) = 0;

    virtual std::any visitPackage_privilege(Db2Parser::Package_privilegeContext *context) = 0;

    virtual std::any visitGrant_role_statement(Db2Parser::Grant_role_statementContext *context) = 0;

    virtual std::any visitRole_list(Db2Parser::Role_listContext *context) = 0;

    virtual std::any visitGrant_routine_privileges_statement(Db2Parser::Grant_routine_privileges_statementContext *context) = 0;

    virtual std::any visitGrant_schema_privileges_statement(Db2Parser::Grant_schema_privileges_statementContext *context) = 0;

    virtual std::any visitSchema_privilege_list(Db2Parser::Schema_privilege_listContext *context) = 0;

    virtual std::any visitSchema_privilege(Db2Parser::Schema_privilegeContext *context) = 0;

    virtual std::any visitGrant_security_label_statement(Db2Parser::Grant_security_label_statementContext *context) = 0;

    virtual std::any visitGrant_sequence_privileges_statement(Db2Parser::Grant_sequence_privileges_statementContext *context) = 0;

    virtual std::any visitSequence_privilege_list(Db2Parser::Sequence_privilege_listContext *context) = 0;

    virtual std::any visitSequence_privilege(Db2Parser::Sequence_privilegeContext *context) = 0;

    virtual std::any visitGrant_server_privileges_statement(Db2Parser::Grant_server_privileges_statementContext *context) = 0;

    virtual std::any visitGrant_setsessionuser_privilege_statement(Db2Parser::Grant_setsessionuser_privilege_statementContext *context) = 0;

    virtual std::any visitUser_list(Db2Parser::User_listContext *context) = 0;

    virtual std::any visitUser_auth(Db2Parser::User_authContext *context) = 0;

    virtual std::any visitGrant_table_space_privileges_statement(Db2Parser::Grant_table_space_privileges_statementContext *context) = 0;

    virtual std::any visitGrant_table_view_or_nickname_privileges_statement(Db2Parser::Grant_table_view_or_nickname_privileges_statementContext *context) = 0;

    virtual std::any visitTvn_privilege_list(Db2Parser::Tvn_privilege_listContext *context) = 0;

    virtual std::any visitTvn_privilege(Db2Parser::Tvn_privilegeContext *context) = 0;

    virtual std::any visitColumn_name_list_paren(Db2Parser::Column_name_list_parenContext *context) = 0;

    virtual std::any visitColumn_name_list(Db2Parser::Column_name_listContext *context) = 0;

    virtual std::any visitGrant_workload_privileges_statement(Db2Parser::Grant_workload_privileges_statementContext *context) = 0;

    virtual std::any visitGrant_xsr_object_privileges_statement(Db2Parser::Grant_xsr_object_privileges_statementContext *context) = 0;

    virtual std::any visitRevoke_database_authorities_statement(Db2Parser::Revoke_database_authorities_statementContext *context) = 0;

    virtual std::any visitBy_all(Db2Parser::By_allContext *context) = 0;

    virtual std::any visitRevoke_exemption_statement(Db2Parser::Revoke_exemption_statementContext *context) = 0;

    virtual std::any visitRevoke_global_variable_privileges_statement(Db2Parser::Revoke_global_variable_privileges_statementContext *context) = 0;

    virtual std::any visitRevoke_index_privileges_statement(Db2Parser::Revoke_index_privileges_statementContext *context) = 0;

    virtual std::any visitRevoke_module_privileges_statement(Db2Parser::Revoke_module_privileges_statementContext *context) = 0;

    virtual std::any visitRevoke_package_privileges_statement(Db2Parser::Revoke_package_privileges_statementContext *context) = 0;

    virtual std::any visitRevoke_role_statement(Db2Parser::Revoke_role_statementContext *context) = 0;

    virtual std::any visitRevoke_routine_privileges_statement(Db2Parser::Revoke_routine_privileges_statementContext *context) = 0;

    virtual std::any visitRevoke_schema_privileges_statement(Db2Parser::Revoke_schema_privileges_statementContext *context) = 0;

    virtual std::any visitRevoke_security_label_statement(Db2Parser::Revoke_security_label_statementContext *context) = 0;

    virtual std::any visitRevoke_sequence_privileges_statement(Db2Parser::Revoke_sequence_privileges_statementContext *context) = 0;

    virtual std::any visitRevoke_server_privileges_statement(Db2Parser::Revoke_server_privileges_statementContext *context) = 0;

    virtual std::any visitRevoke_setsessionuser_privilege_statement(Db2Parser::Revoke_setsessionuser_privilege_statementContext *context) = 0;

    virtual std::any visitRevoke_table_space_privileges_statement(Db2Parser::Revoke_table_space_privileges_statementContext *context) = 0;

    virtual std::any visitRevoke_table_view_or_nickname_privileges_statement(Db2Parser::Revoke_table_view_or_nickname_privileges_statementContext *context) = 0;

    virtual std::any visitRevoke_workload_privileges_statement(Db2Parser::Revoke_workload_privileges_statementContext *context) = 0;

    virtual std::any visitRevoke_xsr_object_privileges_statement(Db2Parser::Revoke_xsr_object_privileges_statementContext *context) = 0;

    virtual std::any visitUser_group_role(Db2Parser::User_group_roleContext *context) = 0;

    virtual std::any visitRollback_statement(Db2Parser::Rollback_statementContext *context) = 0;

    virtual std::any visitSavepoint_statement(Db2Parser::Savepoint_statementContext *context) = 0;

    virtual std::any visitRelease_savepoint_statement(Db2Parser::Release_savepoint_statementContext *context) = 0;

    virtual std::any visitAllocate_cursor_statement(Db2Parser::Allocate_cursor_statementContext *context) = 0;

    virtual std::any visitAlter_audit_policy_statement(Db2Parser::Alter_audit_policy_statementContext *context) = 0;

    virtual std::any visitStatus_spec(Db2Parser::Status_specContext *context) = 0;

    virtual std::any visitNormal_audit(Db2Parser::Normal_auditContext *context) = 0;

    virtual std::any visitAlter_bufferpool_statement(Db2Parser::Alter_bufferpool_statementContext *context) = 0;

    virtual std::any visitImmediate_deferred(Db2Parser::Immediate_deferredContext *context) = 0;

    virtual std::any visitAlter_database_partition_group_statement(Db2Parser::Alter_database_partition_group_statementContext *context) = 0;

    virtual std::any visitDb_partition_group_list_item(Db2Parser::Db_partition_group_list_itemContext *context) = 0;

    virtual std::any visitDb_partition_num_nums(Db2Parser::Db_partition_num_numsContext *context) = 0;

    virtual std::any visitDb_partitions_clause(Db2Parser::Db_partitions_clauseContext *context) = 0;

    virtual std::any visitDb_partition_options(Db2Parser::Db_partition_optionsContext *context) = 0;

    virtual std::any visitAlter_database_statement(Db2Parser::Alter_database_statementContext *context) = 0;

    virtual std::any visitAlter_database_opts(Db2Parser::Alter_database_optsContext *context) = 0;

    virtual std::any visitAlter_event_monitor_statement(Db2Parser::Alter_event_monitor_statementContext *context) = 0;

    virtual std::any visitAlter_event_monitor_opts(Db2Parser::Alter_event_monitor_optsContext *context) = 0;

    virtual std::any visitAlter_function_statement(Db2Parser::Alter_function_statementContext *context) = 0;

    virtual std::any visitAlter_function_opts(Db2Parser::Alter_function_optsContext *context) = 0;

    virtual std::any visitFunction_designator(Db2Parser::Function_designatorContext *context) = 0;

    virtual std::any visitData_type_list(Db2Parser::Data_type_listContext *context) = 0;

    virtual std::any visitData_type_list_paren(Db2Parser::Data_type_list_parenContext *context) = 0;

    virtual std::any visitAlter_histogram_template_statement(Db2Parser::Alter_histogram_template_statementContext *context) = 0;

    virtual std::any visitAlter_index_statement(Db2Parser::Alter_index_statementContext *context) = 0;

    virtual std::any visitYes_no(Db2Parser::Yes_noContext *context) = 0;

    virtual std::any visitAlter_mask_statement(Db2Parser::Alter_mask_statementContext *context) = 0;

    virtual std::any visitEnable_disable(Db2Parser::Enable_disableContext *context) = 0;

    virtual std::any visitAlter_method_statement(Db2Parser::Alter_method_statementContext *context) = 0;

    virtual std::any visitMethod_designator(Db2Parser::Method_designatorContext *context) = 0;

    virtual std::any visitAlter_model_statement(Db2Parser::Alter_model_statementContext *context) = 0;

    virtual std::any visitAlter_module_statement(Db2Parser::Alter_module_statementContext *context) = 0;

    virtual std::any visitAlter_module_opts(Db2Parser::Alter_module_optsContext *context) = 0;

    virtual std::any visitModule_function_definition(Db2Parser::Module_function_definitionContext *context) = 0;

    virtual std::any visitModule_procedure_definition(Db2Parser::Module_procedure_definitionContext *context) = 0;

    virtual std::any visitModule_type_definition(Db2Parser::Module_type_definitionContext *context) = 0;

    virtual std::any visitModule_variable_definition(Db2Parser::Module_variable_definitionContext *context) = 0;

    virtual std::any visitModule_condition_definition(Db2Parser::Module_condition_definitionContext *context) = 0;

    virtual std::any visitModule_object_identification(Db2Parser::Module_object_identificationContext *context) = 0;

    virtual std::any visitModule_function_designator(Db2Parser::Module_function_designatorContext *context) = 0;

    virtual std::any visitModule_procedure_designator(Db2Parser::Module_procedure_designatorContext *context) = 0;

    virtual std::any visitAlter_nickname_statement(Db2Parser::Alter_nickname_statementContext *context) = 0;

    virtual std::any visitAlter_nickname_opts_1(Db2Parser::Alter_nickname_opts_1Context *context) = 0;

    virtual std::any visitAlter_nickname_opts_1_item(Db2Parser::Alter_nickname_opts_1_itemContext *context) = 0;

    virtual std::any visitAlter_nickname_opts_2(Db2Parser::Alter_nickname_opts_2Context *context) = 0;

    virtual std::any visitAlter_nickname_opts_2_item(Db2Parser::Alter_nickname_opts_2_itemContext *context) = 0;

    virtual std::any visitConstraint_alteration(Db2Parser::Constraint_alterationContext *context) = 0;

    virtual std::any visitAlter_package_statement(Db2Parser::Alter_package_statementContext *context) = 0;

    virtual std::any visitAlter_package_opts(Db2Parser::Alter_package_optsContext *context) = 0;

    virtual std::any visitAlter_permission_statement(Db2Parser::Alter_permission_statementContext *context) = 0;

    virtual std::any visitAlter_procedure_external_statement(Db2Parser::Alter_procedure_external_statementContext *context) = 0;

    virtual std::any visitAlter_procedure_external_opts(Db2Parser::Alter_procedure_external_optsContext *context) = 0;

    virtual std::any visitProcedure_designator(Db2Parser::Procedure_designatorContext *context) = 0;

    virtual std::any visitAlter_procedure_sourced_statement(Db2Parser::Alter_procedure_sourced_statementContext *context) = 0;

    virtual std::any visitParameter_alteration(Db2Parser::Parameter_alterationContext *context) = 0;

    virtual std::any visitAlter_procedure_sql_statement(Db2Parser::Alter_procedure_sql_statementContext *context) = 0;

    virtual std::any visitAlter_schema_statement(Db2Parser::Alter_schema_statementContext *context) = 0;

    virtual std::any visitNone_changes(Db2Parser::None_changesContext *context) = 0;

    virtual std::any visitAlter_security_label_component_statement(Db2Parser::Alter_security_label_component_statementContext *context) = 0;

    virtual std::any visitAdd_element_clause(Db2Parser::Add_element_clauseContext *context) = 0;

    virtual std::any visitArray_element_clause(Db2Parser::Array_element_clauseContext *context) = 0;

    virtual std::any visitTree_element_clause(Db2Parser::Tree_element_clauseContext *context) = 0;

    virtual std::any visitAlter_security_policy_statement(Db2Parser::Alter_security_policy_statementContext *context) = 0;

    virtual std::any visitAlter_security_policy_opts(Db2Parser::Alter_security_policy_optsContext *context) = 0;

    virtual std::any visitAlter_sequence_statement(Db2Parser::Alter_sequence_statementContext *context) = 0;

    virtual std::any visitAlter_sequence_opts(Db2Parser::Alter_sequence_optsContext *context) = 0;

    virtual std::any visitAlter_server_statement(Db2Parser::Alter_server_statementContext *context) = 0;

    virtual std::any visitAlter_server_opts(Db2Parser::Alter_server_optsContext *context) = 0;

    virtual std::any visitAlter_service_class_statement(Db2Parser::Alter_service_class_statementContext *context) = 0;

    virtual std::any visitAlter_service_class_opts(Db2Parser::Alter_service_class_optsContext *context) = 0;

    virtual std::any visitDefault_on_off(Db2Parser::Default_on_offContext *context) = 0;

    virtual std::any visitDefault_high_medium_low(Db2Parser::Default_high_medium_lowContext *context) = 0;

    virtual std::any visitAlter_stogroup_statement(Db2Parser::Alter_stogroup_statementContext *context) = 0;

    virtual std::any visitAlter_stogroup_opts(Db2Parser::Alter_stogroup_optsContext *context) = 0;

    virtual std::any visitAlter_table_statement(Db2Parser::Alter_table_statementContext *context) = 0;

    virtual std::any visitAlter_table_opts(Db2Parser::Alter_table_optsContext *context) = 0;

    virtual std::any visitNull_on_off(Db2Parser::Null_on_offContext *context) = 0;

    virtual std::any visitCascade_restrict(Db2Parser::Cascade_restrictContext *context) = 0;

    virtual std::any visitMaterialized_query_definition(Db2Parser::Materialized_query_definitionContext *context) = 0;

    virtual std::any visitRefreshable_table_options(Db2Parser::Refreshable_table_optionsContext *context) = 0;

    virtual std::any visitColumn_alteration(Db2Parser::Column_alterationContext *context) = 0;

    virtual std::any visitGeneration_alteration(Db2Parser::Generation_alterationContext *context) = 0;

    virtual std::any visitIdentity_alteration(Db2Parser::Identity_alterationContext *context) = 0;

    virtual std::any visitGeneration_attribute(Db2Parser::Generation_attributeContext *context) = 0;

    virtual std::any visitAs_identity_clause(Db2Parser::As_identity_clauseContext *context) = 0;

    virtual std::any visitAs_identity_clause_opts(Db2Parser::As_identity_clause_optsContext *context) = 0;

    virtual std::any visitPeriod_definition_alter(Db2Parser::Period_definition_alterContext *context) = 0;

    virtual std::any visitAdd_partition(Db2Parser::Add_partitionContext *context) = 0;

    virtual std::any visitBoundary_spec_alter(Db2Parser::Boundary_spec_alterContext *context) = 0;

    virtual std::any visitAttach_partition(Db2Parser::Attach_partitionContext *context) = 0;

    virtual std::any visitActivate_deactivate(Db2Parser::Activate_deactivateContext *context) = 0;

    virtual std::any visitAlter_tablespace_statement(Db2Parser::Alter_tablespace_statementContext *context) = 0;

    virtual std::any visitAlter_tablespace_opts(Db2Parser::Alter_tablespace_optsContext *context) = 0;

    virtual std::any visitAdd_clause(Db2Parser::Add_clauseContext *context) = 0;

    virtual std::any visitDb_container_clause(Db2Parser::Db_container_clauseContext *context) = 0;

    virtual std::any visitDb_container_clause_opts(Db2Parser::Db_container_clause_optsContext *context) = 0;

    virtual std::any visitDrop_container_clause(Db2Parser::Drop_container_clauseContext *context) = 0;

    virtual std::any visitFile_device(Db2Parser::File_deviceContext *context) = 0;

    virtual std::any visitAll_containers_clause(Db2Parser::All_containers_clauseContext *context) = 0;

    virtual std::any visitSystem_container_clause(Db2Parser::System_container_clauseContext *context) = 0;

    virtual std::any visitStripeset(Db2Parser::StripesetContext *context) = 0;

    virtual std::any visitKm(Db2Parser::KmContext *context) = 0;

    virtual std::any visitKmg_percent(Db2Parser::Kmg_percentContext *context) = 0;

    virtual std::any visitAlter_threshold_statement(Db2Parser::Alter_threshold_statementContext *context) = 0;

    virtual std::any visitAlter_threshold_opts(Db2Parser::Alter_threshold_optsContext *context) = 0;

    virtual std::any visitAlter_threshold_predicate(Db2Parser::Alter_threshold_predicateContext *context) = 0;

    virtual std::any visitAlter_threshold_exceeded_actions(Db2Parser::Alter_threshold_exceeded_actionsContext *context) = 0;

    virtual std::any visitDt_units(Db2Parser::Dt_unitsContext *context) = 0;

    virtual std::any visitDt_units_with_seconds(Db2Parser::Dt_units_with_secondsContext *context) = 0;

    virtual std::any visitAlter_trigger_statement(Db2Parser::Alter_trigger_statementContext *context) = 0;

    virtual std::any visitAlter_trusted_context_statement(Db2Parser::Alter_trusted_context_statementContext *context) = 0;

    virtual std::any visitAlter_trusted_context_opts(Db2Parser::Alter_trusted_context_optsContext *context) = 0;

    virtual std::any visitAlter_trusted_context_opts_alter_opts(Db2Parser::Alter_trusted_context_opts_alter_optsContext *context) = 0;

    virtual std::any visitAddr_clause_encryption_val(Db2Parser::Addr_clause_encryption_valContext *context) = 0;

    virtual std::any visitAddress_clause(Db2Parser::Address_clauseContext *context) = 0;

    virtual std::any visitUser_clause(Db2Parser::User_clauseContext *context) = 0;

    virtual std::any visitUse_for_opts(Db2Parser::Use_for_optsContext *context) = 0;

    virtual std::any visitUse_for_opts_2(Db2Parser::Use_for_opts_2Context *context) = 0;

    virtual std::any visitAlter_type_statement(Db2Parser::Alter_type_statementContext *context) = 0;

    virtual std::any visitAlter_type_opts(Db2Parser::Alter_type_optsContext *context) = 0;

    virtual std::any visitMethod_identifier(Db2Parser::Method_identifierContext *context) = 0;

    virtual std::any visitMethod_options(Db2Parser::Method_optionsContext *context) = 0;

    virtual std::any visitAlter_usage_list_statement(Db2Parser::Alter_usage_list_statementContext *context) = 0;

    virtual std::any visitAlter_usage_list_opts_item(Db2Parser::Alter_usage_list_opts_itemContext *context) = 0;

    virtual std::any visitAlter_user_mapping_statement(Db2Parser::Alter_user_mapping_statementContext *context) = 0;

    virtual std::any visitAlter_user_mapping_opts_item(Db2Parser::Alter_user_mapping_opts_itemContext *context) = 0;

    virtual std::any visitAdd_set(Db2Parser::Add_setContext *context) = 0;

    virtual std::any visitAlter_view_statement(Db2Parser::Alter_view_statementContext *context) = 0;

    virtual std::any visitAlter_view_opts(Db2Parser::Alter_view_optsContext *context) = 0;

    virtual std::any visitAlter_work_action_set_statement(Db2Parser::Alter_work_action_set_statementContext *context) = 0;

    virtual std::any visitAlter_work_action_set_opts(Db2Parser::Alter_work_action_set_optsContext *context) = 0;

    virtual std::any visitWork_action_alteration(Db2Parser::Work_action_alterationContext *context) = 0;

    virtual std::any visitWork_action_alteration_opts(Db2Parser::Work_action_alteration_optsContext *context) = 0;

    virtual std::any visitAlter_action_types_clause(Db2Parser::Alter_action_types_clauseContext *context) = 0;

    virtual std::any visitThreshold_predicate_clause(Db2Parser::Threshold_predicate_clauseContext *context) = 0;

    virtual std::any visitAlter_work_class_set_statement(Db2Parser::Alter_work_class_set_statementContext *context) = 0;

    virtual std::any visitAlter_work_class_set_opts(Db2Parser::Alter_work_class_set_optsContext *context) = 0;

    virtual std::any visitWork_class_alteration(Db2Parser::Work_class_alterationContext *context) = 0;

    virtual std::any visitWork_class_alteration_opts(Db2Parser::Work_class_alteration_optsContext *context) = 0;

    virtual std::any visitFor_from_to_alter_clause(Db2Parser::For_from_to_alter_clauseContext *context) = 0;

    virtual std::any visitSchema_alter_clause(Db2Parser::Schema_alter_clauseContext *context) = 0;

    virtual std::any visitData_tag_alter_clause(Db2Parser::Data_tag_alter_clauseContext *context) = 0;

    virtual std::any visitAlter_workload_statement(Db2Parser::Alter_workload_statementContext *context) = 0;

    virtual std::any visitAlter_workload_opts_item(Db2Parser::Alter_workload_opts_itemContext *context) = 0;

    virtual std::any visitPackage_executable(Db2Parser::Package_executableContext *context) = 0;

    virtual std::any visitBase_none(Db2Parser::Base_noneContext *context) = 0;

    virtual std::any visitExtended_base_none(Db2Parser::Extended_base_noneContext *context) = 0;

    virtual std::any visitAlter_collect_activity_data_clause(Db2Parser::Alter_collect_activity_data_clauseContext *context) = 0;

    virtual std::any visitWith_opts(Db2Parser::With_optsContext *context) = 0;

    virtual std::any visitAlter_collect_history_clause(Db2Parser::Alter_collect_history_clauseContext *context) = 0;

    virtual std::any visitAlter_collect_lock_wait_data_clause(Db2Parser::Alter_collect_lock_wait_data_clauseContext *context) = 0;

    virtual std::any visitAlter_wrapper_statement(Db2Parser::Alter_wrapper_statementContext *context) = 0;

    virtual std::any visitAlter_wrapper_opts_item(Db2Parser::Alter_wrapper_opts_itemContext *context) = 0;

    virtual std::any visitAlter_xsrobject_statement(Db2Parser::Alter_xsrobject_statementContext *context) = 0;

    virtual std::any visitString(Db2Parser::StringContext *context) = 0;

    virtual std::any visitString_constant(Db2Parser::String_constantContext *context) = 0;

    virtual std::any visitNumeric_constant(Db2Parser::Numeric_constantContext *context) = 0;

    virtual std::any visitData_type(Db2Parser::Data_typeContext *context) = 0;

    virtual std::any visitAnchored_data_type(Db2Parser::Anchored_data_typeContext *context) = 0;

    virtual std::any visitAnchored_non_row_data_type(Db2Parser::Anchored_non_row_data_typeContext *context) = 0;

    virtual std::any visitAnchored_row_data_type(Db2Parser::Anchored_row_data_typeContext *context) = 0;

    virtual std::any visitSource_data_type(Db2Parser::Source_data_typeContext *context) = 0;

    virtual std::any visitData_type_constrainst(Db2Parser::Data_type_constrainstContext *context) = 0;

    virtual std::any visitCheck_condition(Db2Parser::Check_conditionContext *context) = 0;

    virtual std::any visitData_type_2(Db2Parser::Data_type_2Context *context) = 0;

    virtual std::any visitBuilt_in_type(Db2Parser::Built_in_typeContext *context) = 0;

    virtual std::any visitInteger_paren(Db2Parser::Integer_parenContext *context) = 0;

    virtual std::any visitInteger_kmg_paren(Db2Parser::Integer_kmg_parenContext *context) = 0;

    virtual std::any visitChar_character(Db2Parser::Char_characterContext *context) = 0;

    virtual std::any visitOctets_codeunits(Db2Parser::Octets_codeunitsContext *context) = 0;

    virtual std::any visitCodeunits(Db2Parser::CodeunitsContext *context) = 0;

    virtual std::any visitKmg(Db2Parser::KmgContext *context) = 0;

    virtual std::any visitRs_locator_variable(Db2Parser::Rs_locator_variableContext *context) = 0;

    virtual std::any visitInteger_constant_list(Db2Parser::Integer_constant_listContext *context) = 0;

    virtual std::any visitInteger_constant(Db2Parser::Integer_constantContext *context) = 0;

    virtual std::any visitInteger_value(Db2Parser::Integer_valueContext *context) = 0;

    virtual std::any visitPositive_integer(Db2Parser::Positive_integerContext *context) = 0;

    virtual std::any visitBigint_value(Db2Parser::Bigint_valueContext *context) = 0;

    virtual std::any visitBigint_constant(Db2Parser::Bigint_constantContext *context) = 0;

    virtual std::any visitMember_number(Db2Parser::Member_numberContext *context) = 0;

    virtual std::any visitVersion_id(Db2Parser::Version_idContext *context) = 0;

    virtual std::any visitDrop_statement(Db2Parser::Drop_statementContext *context) = 0;

    virtual std::any visitAlias_designator(Db2Parser::Alias_designatorContext *context) = 0;

    virtual std::any visitService_class_designator(Db2Parser::Service_class_designatorContext *context) = 0;

    virtual std::any visitTablespace_name_list(Db2Parser::Tablespace_name_listContext *context) = 0;

    virtual std::any visitAssociate_locators_statement(Db2Parser::Associate_locators_statementContext *context) = 0;

    virtual std::any visitAudit_statement(Db2Parser::Audit_statementContext *context) = 0;

    virtual std::any visitBegin_declare_section_statement(Db2Parser::Begin_declare_section_statementContext *context) = 0;

    virtual std::any visitCall_statement(Db2Parser::Call_statementContext *context) = 0;

    virtual std::any visitArg_list_paren(Db2Parser::Arg_list_parenContext *context) = 0;

    virtual std::any visitArg_list(Db2Parser::Arg_listContext *context) = 0;

    virtual std::any visitArgument(Db2Parser::ArgumentContext *context) = 0;

    virtual std::any visitCase_statement(Db2Parser::Case_statementContext *context) = 0;

    virtual std::any visitSearched_case_statement_when_clause(Db2Parser::Searched_case_statement_when_clauseContext *context) = 0;

    virtual std::any visitSimple_case_statement_when_clause(Db2Parser::Simple_case_statement_when_clauseContext *context) = 0;

    virtual std::any visitClose_statement(Db2Parser::Close_statementContext *context) = 0;

    virtual std::any visitComment_statement(Db2Parser::Comment_statementContext *context) = 0;

    virtual std::any visitColumn_comment(Db2Parser::Column_commentContext *context) = 0;

    virtual std::any visitComment_objects(Db2Parser::Comment_objectsContext *context) = 0;

    virtual std::any visitCommit_statement(Db2Parser::Commit_statementContext *context) = 0;

    virtual std::any visitConnect_type_1_statement(Db2Parser::Connect_type_1_statementContext *context) = 0;

    virtual std::any visitAuthorization(Db2Parser::AuthorizationContext *context) = 0;

    virtual std::any visitPasswords(Db2Parser::PasswordsContext *context) = 0;

    virtual std::any visitLock_block(Db2Parser::Lock_blockContext *context) = 0;

    virtual std::any visitAccesstoken(Db2Parser::AccesstokenContext *context) = 0;

    virtual std::any visitToken(Db2Parser::TokenContext *context) = 0;

    virtual std::any visitApi_key(Db2Parser::Api_keyContext *context) = 0;

    virtual std::any visitToken_type(Db2Parser::Token_typeContext *context) = 0;

    virtual std::any visitDeclare_cursor_statement(Db2Parser::Declare_cursor_statementContext *context) = 0;

    virtual std::any visitDeclare_global_temporary_table_statement(Db2Parser::Declare_global_temporary_table_statementContext *context) = 0;

    virtual std::any visitDescribe_statement(Db2Parser::Describe_statementContext *context) = 0;

    virtual std::any visitXquery_statement(Db2Parser::Xquery_statementContext *context) = 0;

    virtual std::any visitDescribe_input_statement(Db2Parser::Describe_input_statementContext *context) = 0;

    virtual std::any visitDescribe_output_statement(Db2Parser::Describe_output_statementContext *context) = 0;

    virtual std::any visitDisconnect_statement(Db2Parser::Disconnect_statementContext *context) = 0;

    virtual std::any visitEnd_declare_section_statement(Db2Parser::End_declare_section_statementContext *context) = 0;

    virtual std::any visitExecute_statement(Db2Parser::Execute_statementContext *context) = 0;

    virtual std::any visitHost_variable_expression(Db2Parser::Host_variable_expressionContext *context) = 0;

    virtual std::any visitAssignment_target(Db2Parser::Assignment_targetContext *context) = 0;

    virtual std::any visitExecute_immediate_statement(Db2Parser::Execute_immediate_statementContext *context) = 0;

    virtual std::any visitExplain_statement(Db2Parser::Explain_statementContext *context) = 0;

    virtual std::any visitExplainable_sql_statement(Db2Parser::Explainable_sql_statementContext *context) = 0;

    virtual std::any visitFetch_statement(Db2Parser::Fetch_statementContext *context) = 0;

    virtual std::any visitFlush_bufferpools_statement(Db2Parser::Flush_bufferpools_statementContext *context) = 0;

    virtual std::any visitFlush_event_monitor_statement(Db2Parser::Flush_event_monitor_statementContext *context) = 0;

    virtual std::any visitFlush_federated_cache_statement(Db2Parser::Flush_federated_cache_statementContext *context) = 0;

    virtual std::any visitFlush_optimization_profile_cache_statement(Db2Parser::Flush_optimization_profile_cache_statementContext *context) = 0;

    virtual std::any visitFlush_package_cache_statement(Db2Parser::Flush_package_cache_statementContext *context) = 0;

    virtual std::any visitFlush_authentication_cache_statement(Db2Parser::Flush_authentication_cache_statementContext *context) = 0;

    virtual std::any visitFree_locator_statement(Db2Parser::Free_locator_statementContext *context) = 0;

    virtual std::any visitGet_diagnostics_statement(Db2Parser::Get_diagnostics_statementContext *context) = 0;

    virtual std::any visitStatement_information(Db2Parser::Statement_informationContext *context) = 0;

    virtual std::any visitCondition_information(Db2Parser::Condition_informationContext *context) = 0;

    virtual std::any visitCondition_var_assignment(Db2Parser::Condition_var_assignmentContext *context) = 0;

    virtual std::any visitLock_table_statement(Db2Parser::Lock_table_statementContext *context) = 0;

    virtual std::any visitPipe_statement(Db2Parser::Pipe_statementContext *context) = 0;

    virtual std::any visitRefresh_table_statement(Db2Parser::Refresh_table_statementContext *context) = 0;

    virtual std::any visitRelease_connection_statement(Db2Parser::Release_connection_statementContext *context) = 0;

    virtual std::any visitRename_statement(Db2Parser::Rename_statementContext *context) = 0;

    virtual std::any visitRename_stogroup_statement(Db2Parser::Rename_stogroup_statementContext *context) = 0;

    virtual std::any visitRename_tablespace_statement(Db2Parser::Rename_tablespace_statementContext *context) = 0;

    virtual std::any visitSet_statement(Db2Parser::Set_statementContext *context) = 0;

    virtual std::any visitAccess_mode_clause(Db2Parser::Access_mode_clauseContext *context) = 0;

    virtual std::any visitCascade_clause(Db2Parser::Cascade_clauseContext *context) = 0;

    virtual std::any visitTo_descendent_types(Db2Parser::To_descendent_typesContext *context) = 0;

    virtual std::any visitTable_type_list(Db2Parser::Table_type_listContext *context) = 0;

    virtual std::any visitTable_type(Db2Parser::Table_typeContext *context) = 0;

    virtual std::any visitTable_checked_options_list(Db2Parser::Table_checked_options_listContext *context) = 0;

    virtual std::any visitTable_checked_options(Db2Parser::Table_checked_optionsContext *context) = 0;

    virtual std::any visitOnline_options(Db2Parser::Online_optionsContext *context) = 0;

    virtual std::any visitQuery_optimization_options(Db2Parser::Query_optimization_optionsContext *context) = 0;

    virtual std::any visitCheck_options(Db2Parser::Check_optionsContext *context) = 0;

    virtual std::any visitIncremental_options(Db2Parser::Incremental_optionsContext *context) = 0;

    virtual std::any visitException_clause(Db2Parser::Exception_clauseContext *context) = 0;

    virtual std::any visitIn_table_use_clause(Db2Parser::In_table_use_clauseContext *context) = 0;

    virtual std::any visitTable_unchecked_options(Db2Parser::Table_unchecked_optionsContext *context) = 0;

    virtual std::any visitFull_access(Db2Parser::Full_accessContext *context) = 0;

    virtual std::any visitIntegrity_options(Db2Parser::Integrity_optionsContext *context) = 0;

    virtual std::any visitIntegrity_options_item(Db2Parser::Integrity_options_itemContext *context) = 0;

    virtual std::any visitVar_def_list(Db2Parser::Var_def_listContext *context) = 0;

    virtual std::any visitVar_def(Db2Parser::Var_defContext *context) = 0;

    virtual std::any visitExpr_null(Db2Parser::Expr_nullContext *context) = 0;

    virtual std::any visitExpr_null_default(Db2Parser::Expr_null_defaultContext *context) = 0;

    virtual std::any visitArray_index(Db2Parser::Array_indexContext *context) = 0;

    virtual std::any visitRow_fullselect(Db2Parser::Row_fullselectContext *context) = 0;

    virtual std::any visitTarget_variable(Db2Parser::Target_variableContext *context) = 0;

    virtual std::any visitTarget_cursor_variable(Db2Parser::Target_cursor_variableContext *context) = 0;

    virtual std::any visitTarget_row_variable(Db2Parser::Target_row_variableContext *context) = 0;

    virtual std::any visitRow_array_element_specification(Db2Parser::Row_array_element_specificationContext *context) = 0;

    virtual std::any visitRow_field_reference(Db2Parser::Row_field_referenceContext *context) = 0;

    virtual std::any visitField_reference(Db2Parser::Field_referenceContext *context) = 0;

    virtual std::any visitSearch_condition(Db2Parser::Search_conditionContext *context) = 0;

    virtual std::any visitPredicate(Db2Parser::PredicateContext *context) = 0;

    virtual std::any visitAccording_to_clause(Db2Parser::According_to_clauseContext *context) = 0;

    virtual std::any visitXml_schema_identification_list(Db2Parser::Xml_schema_identification_listContext *context) = 0;

    virtual std::any visitXml_schema_identification(Db2Parser::Xml_schema_identificationContext *context) = 0;

    virtual std::any visitFullselect_in_parentheses(Db2Parser::Fullselect_in_parenthesesContext *context) = 0;

    virtual std::any visitSome_any_all(Db2Parser::Some_any_allContext *context) = 0;

    virtual std::any visitRow_value_expression(Db2Parser::Row_value_expressionContext *context) = 0;

    virtual std::any visitComparison_operator(Db2Parser::Comparison_operatorContext *context) = 0;

    virtual std::any visitRow_expression(Db2Parser::Row_expressionContext *context) = 0;

    virtual std::any visitPath_opt_list(Db2Parser::Path_opt_listContext *context) = 0;

    virtual std::any visitPath_opt(Db2Parser::Path_optContext *context) = 0;

    virtual std::any visitPkg_opt_list(Db2Parser::Pkg_opt_listContext *context) = 0;

    virtual std::any visitPkg_opt(Db2Parser::Pkg_optContext *context) = 0;

    virtual std::any visitMaintain_opt_list(Db2Parser::Maintain_opt_listContext *context) = 0;

    virtual std::any visitMaintain_opt(Db2Parser::Maintain_optContext *context) = 0;

    virtual std::any visitVariable(Db2Parser::VariableContext *context) = 0;

    virtual std::any visitHost_variable(Db2Parser::Host_variableContext *context) = 0;

    virtual std::any visitSet_integrity_statement(Db2Parser::Set_integrity_statementContext *context) = 0;

    virtual std::any visitTransfer_ownership_statement(Db2Parser::Transfer_ownership_statementContext *context) = 0;

    virtual std::any visitObjects(Db2Parser::ObjectsContext *context) = 0;

    virtual std::any visitWhenever_statement(Db2Parser::Whenever_statementContext *context) = 0;

    virtual std::any visitFor_statement(Db2Parser::For_statementContext *context) = 0;

    virtual std::any visitGoto_statement(Db2Parser::Goto_statementContext *context) = 0;

    virtual std::any visitIf_statement(Db2Parser::If_statementContext *context) = 0;

    virtual std::any visitInclude_statement(Db2Parser::Include_statementContext *context) = 0;

    virtual std::any visitResignal_statement(Db2Parser::Resignal_statementContext *context) = 0;

    virtual std::any visitSignal_information(Db2Parser::Signal_informationContext *context) = 0;

    virtual std::any visitDiagnostic_string_constant(Db2Parser::Diagnostic_string_constantContext *context) = 0;

    virtual std::any visitSignal_statement(Db2Parser::Signal_statementContext *context) = 0;

    virtual std::any visitSqlstate_string_constant(Db2Parser::Sqlstate_string_constantContext *context) = 0;

    virtual std::any visitSqlstate_string_variable(Db2Parser::Sqlstate_string_variableContext *context) = 0;

    virtual std::any visitSignal_information_2(Db2Parser::Signal_information_2Context *context) = 0;

    virtual std::any visitDiagnostic_string_expression(Db2Parser::Diagnostic_string_expressionContext *context) = 0;

    virtual std::any visitIterate_statement(Db2Parser::Iterate_statementContext *context) = 0;

    virtual std::any visitLeave_statement(Db2Parser::Leave_statementContext *context) = 0;

    virtual std::any visitLoop_statement(Db2Parser::Loop_statementContext *context) = 0;

    virtual std::any visitOpen_statement(Db2Parser::Open_statementContext *context) = 0;

    virtual std::any visitVariable_or_expression(Db2Parser::Variable_or_expressionContext *context) = 0;

    virtual std::any visitSelect_into_statement(Db2Parser::Select_into_statementContext *context) = 0;

    virtual std::any visitValues_into_statement(Db2Parser::Values_into_statementContext *context) = 0;

    virtual std::any visitPrepare_statement(Db2Parser::Prepare_statementContext *context) = 0;

    virtual std::any visitRepeat_statement(Db2Parser::Repeat_statementContext *context) = 0;

    virtual std::any visitReturn_statement(Db2Parser::Return_statementContext *context) = 0;

    virtual std::any visitWhile_statement(Db2Parser::While_statementContext *context) = 0;

    virtual std::any visitSql_routine_statement(Db2Parser::Sql_routine_statementContext *context) = 0;

    virtual std::any visitCommon_table_expression(Db2Parser::Common_table_expressionContext *context) = 0;

    virtual std::any visitCreate_alias_statement(Db2Parser::Create_alias_statementContext *context) = 0;

    virtual std::any visitTable_alias(Db2Parser::Table_aliasContext *context) = 0;

    virtual std::any visitModule_alias(Db2Parser::Module_aliasContext *context) = 0;

    virtual std::any visitSequence_alias(Db2Parser::Sequence_aliasContext *context) = 0;

    virtual std::any visitOr_replace(Db2Parser::Or_replaceContext *context) = 0;

    virtual std::any visitCreate_audit_policy_statement(Db2Parser::Create_audit_policy_statementContext *context) = 0;

    virtual std::any visitAudit_policy_opts(Db2Parser::Audit_policy_optsContext *context) = 0;

    virtual std::any visitAudit_policy_categories_opts(Db2Parser::Audit_policy_categories_optsContext *context) = 0;

    virtual std::any visitCreate_bufferpool_statement(Db2Parser::Create_bufferpool_statementContext *context) = 0;

    virtual std::any visitBufferpool_opts(Db2Parser::Bufferpool_optsContext *context) = 0;

    virtual std::any visitExcept_clause(Db2Parser::Except_clauseContext *context) = 0;

    virtual std::any visitMember_list(Db2Parser::Member_listContext *context) = 0;

    virtual std::any visitMember_list_item(Db2Parser::Member_list_itemContext *context) = 0;

    virtual std::any visitCreate_database_partition_group_statement(Db2Parser::Create_database_partition_group_statementContext *context) = 0;

    virtual std::any visitCreate_event_monitor_statement(Db2Parser::Create_event_monitor_statementContext *context) = 0;

    virtual std::any visitCreate_event_monitor_activities_statement(Db2Parser::Create_event_monitor_activities_statementContext *context) = 0;

    virtual std::any visitFormatted_event_table_info_3(Db2Parser::Formatted_event_table_info_3Context *context) = 0;

    virtual std::any visitCreate_event_monitor_change_history_statement(Db2Parser::Create_event_monitor_change_history_statementContext *context) = 0;

    virtual std::any visitEvent_control_list(Db2Parser::Event_control_listContext *context) = 0;

    virtual std::any visitEvent_control(Db2Parser::Event_controlContext *context) = 0;

    virtual std::any visitCreate_event_monitor_locking_statement(Db2Parser::Create_event_monitor_locking_statementContext *context) = 0;

    virtual std::any visitCreate_event_monitor_package_cache_statement(Db2Parser::Create_event_monitor_package_cache_statementContext *context) = 0;

    virtual std::any visitFilter_and_collection_options(Db2Parser::Filter_and_collection_optionsContext *context) = 0;

    virtual std::any visitEvent_condition(Db2Parser::Event_conditionContext *context) = 0;

    virtual std::any visitEvent_condition_item(Db2Parser::Event_condition_itemContext *context) = 0;

    virtual std::any visitCreate_event_monitor_statistics_statement(Db2Parser::Create_event_monitor_statistics_statementContext *context) = 0;

    virtual std::any visitEvent_monitor_statistics_opts(Db2Parser::Event_monitor_statistics_optsContext *context) = 0;

    virtual std::any visitCreate_event_monitor_threshold_violations_statement(Db2Parser::Create_event_monitor_threshold_violations_statementContext *context) = 0;

    virtual std::any visitFormatted_event_table_info_2(Db2Parser::Formatted_event_table_info_2Context *context) = 0;

    virtual std::any visitFile_options(Db2Parser::File_optionsContext *context) = 0;

    virtual std::any visitEvent_monitor_threshold_opts(Db2Parser::Event_monitor_threshold_optsContext *context) = 0;

    virtual std::any visitPages(Db2Parser::PagesContext *context) = 0;

    virtual std::any visitCreate_event_monitor_unit_of_work(Db2Parser::Create_event_monitor_unit_of_workContext *context) = 0;

    virtual std::any visitFormatted_event_table_info(Db2Parser::Formatted_event_table_infoContext *context) = 0;

    virtual std::any visitAutostart_manualstart(Db2Parser::Autostart_manualstartContext *context) = 0;

    virtual std::any visitEvm_group(Db2Parser::Evm_groupContext *context) = 0;

    virtual std::any visitTarget_table_options(Db2Parser::Target_table_optionsContext *context) = 0;

    virtual std::any visitCreate_external_table_statement(Db2Parser::Create_external_table_statementContext *context) = 0;

    virtual std::any visitExt_table_option(Db2Parser::Ext_table_optionContext *context) = 0;

    virtual std::any visitExt_table_option_value(Db2Parser::Ext_table_option_valueContext *context) = 0;

    virtual std::any visitCreate_function_statement(Db2Parser::Create_function_statementContext *context) = 0;

    virtual std::any visitCreate_function_aggregate_interface_statement(Db2Parser::Create_function_aggregate_interface_statementContext *context) = 0;

    virtual std::any visitAgg_fn_param_decl(Db2Parser::Agg_fn_param_declContext *context) = 0;

    virtual std::any visitAgg_fn_option_list(Db2Parser::Agg_fn_option_listContext *context) = 0;

    virtual std::any visitState_variable_declaration(Db2Parser::State_variable_declarationContext *context) = 0;

    virtual std::any visitCreate_function_external_scalar_statement(Db2Parser::Create_function_external_scalar_statementContext *context) = 0;

    virtual std::any visitExt_scalar_param_decl(Db2Parser::Ext_scalar_param_declContext *context) = 0;

    virtual std::any visitExt_scalar_option_list(Db2Parser::Ext_scalar_option_listContext *context) = 0;

    virtual std::any visitExt_scalar_option_list_item(Db2Parser::Ext_scalar_option_list_itemContext *context) = 0;

    virtual std::any visitPredicate_specification(Db2Parser::Predicate_specificationContext *context) = 0;

    virtual std::any visitData_filter(Db2Parser::Data_filterContext *context) = 0;

    virtual std::any visitIndex_exploitation(Db2Parser::Index_exploitationContext *context) = 0;

    virtual std::any visitExploitation_rule(Db2Parser::Exploitation_ruleContext *context) = 0;

    virtual std::any visitCreate_function_external_table_statement(Db2Parser::Create_function_external_table_statementContext *context) = 0;

    virtual std::any visitExt_table_param_decl_list(Db2Parser::Ext_table_param_decl_listContext *context) = 0;

    virtual std::any visitExt_table_param_decl(Db2Parser::Ext_table_param_declContext *context) = 0;

    virtual std::any visitExt_table_option_list(Db2Parser::Ext_table_option_listContext *context) = 0;

    virtual std::any visitExt_table_option_list_item(Db2Parser::Ext_table_option_list_itemContext *context) = 0;

    virtual std::any visitCreate_function_old_db_external_function_statement(Db2Parser::Create_function_old_db_external_function_statementContext *context) = 0;

    virtual std::any visitOledb_option_list(Db2Parser::Oledb_option_listContext *context) = 0;

    virtual std::any visitOledb_option_list_item(Db2Parser::Oledb_option_list_itemContext *context) = 0;

    virtual std::any visitCreate_function_sourced_or_template_statement(Db2Parser::Create_function_sourced_or_template_statementContext *context) = 0;

    virtual std::any visitFn_return_opts(Db2Parser::Fn_return_optsContext *context) = 0;

    virtual std::any visitFn_return_opts_item(Db2Parser::Fn_return_opts_itemContext *context) = 0;

    virtual std::any visitTemplate_opts(Db2Parser::Template_optsContext *context) = 0;

    virtual std::any visitTemplate_opts_item(Db2Parser::Template_opts_itemContext *context) = 0;

    virtual std::any visitAscii_unicode(Db2Parser::Ascii_unicodeContext *context) = 0;

    virtual std::any visitParam_decl_list_3(Db2Parser::Param_decl_list_3Context *context) = 0;

    virtual std::any visitParam_decl_3(Db2Parser::Param_decl_3Context *context) = 0;

    virtual std::any visitCreate_function_sql_scalar_table_or_row_statement(Db2Parser::Create_function_sql_scalar_table_or_row_statementContext *context) = 0;

    virtual std::any visitParam_decl_list_2(Db2Parser::Param_decl_list_2Context *context) = 0;

    virtual std::any visitParam_decl_2(Db2Parser::Param_decl_2Context *context) = 0;

    virtual std::any visitSql_function_body(Db2Parser::Sql_function_bodyContext *context) = 0;

    virtual std::any visitCreate_function_mapping_statement(Db2Parser::Create_function_mapping_statementContext *context) = 0;

    virtual std::any visitFunction_options(Db2Parser::Function_optionsContext *context) = 0;

    virtual std::any visitFunction_option_name(Db2Parser::Function_option_nameContext *context) = 0;

    virtual std::any visitCreate_global_temporary_table_statement(Db2Parser::Create_global_temporary_table_statementContext *context) = 0;

    virtual std::any visitCreate_global_temporary_table_opts(Db2Parser::Create_global_temporary_table_optsContext *context) = 0;

    virtual std::any visitCreate_global_temporary_table_item(Db2Parser::Create_global_temporary_table_itemContext *context) = 0;

    virtual std::any visitDelete_preserve(Db2Parser::Delete_preserveContext *context) = 0;

    virtual std::any visitCreate_histogram_template_statement(Db2Parser::Create_histogram_template_statementContext *context) = 0;

    virtual std::any visitCreate_index_statement(Db2Parser::Create_index_statementContext *context) = 0;

    virtual std::any visitIndex_col_opts(Db2Parser::Index_col_optsContext *context) = 0;

    virtual std::any visitIndex_col_opts_item(Db2Parser::Index_col_opts_itemContext *context) = 0;

    virtual std::any visitKey_expression(Db2Parser::Key_expressionContext *context) = 0;

    virtual std::any visitCreate_index_extension_statement(Db2Parser::Create_index_extension_statementContext *context) = 0;

    virtual std::any visitParam_list(Db2Parser::Param_listContext *context) = 0;

    virtual std::any visitIndex_maintenance(Db2Parser::Index_maintenanceContext *context) = 0;

    virtual std::any visitTable_function_invocation(Db2Parser::Table_function_invocationContext *context) = 0;

    virtual std::any visitIndex_search(Db2Parser::Index_searchContext *context) = 0;

    virtual std::any visitSearch_method_definition(Db2Parser::Search_method_definitionContext *context) = 0;

    virtual std::any visitCreate_mask_statement(Db2Parser::Create_mask_statementContext *context) = 0;

    virtual std::any visitCase_expression(Db2Parser::Case_expressionContext *context) = 0;

    virtual std::any visitRange_producing_funciton_invocation(Db2Parser::Range_producing_funciton_invocationContext *context) = 0;

    virtual std::any visitIndex_filtering_function_invocation(Db2Parser::Index_filtering_function_invocationContext *context) = 0;

    virtual std::any visitCreate_method_statement(Db2Parser::Create_method_statementContext *context) = 0;

    virtual std::any visitMethod_opts(Db2Parser::Method_optsContext *context) = 0;

    virtual std::any visitMethod_opts_item(Db2Parser::Method_opts_itemContext *context) = 0;

    virtual std::any visitMethod_signature(Db2Parser::Method_signatureContext *context) = 0;

    virtual std::any visitMethod_param_list(Db2Parser::Method_param_listContext *context) = 0;

    virtual std::any visitData_type_3(Db2Parser::Data_type_3Context *context) = 0;

    virtual std::any visitData_type_4(Db2Parser::Data_type_4Context *context) = 0;

    virtual std::any visitSql_method_body(Db2Parser::Sql_method_bodyContext *context) = 0;

    virtual std::any visitCompound_sql_inlined(Db2Parser::Compound_sql_inlinedContext *context) = 0;

    virtual std::any visitSql_statement_inlined(Db2Parser::Sql_statement_inlinedContext *context) = 0;

    virtual std::any visitCompound_sql_compiled(Db2Parser::Compound_sql_compiledContext *context) = 0;

    virtual std::any visitSql_statement_compiled(Db2Parser::Sql_statement_compiledContext *context) = 0;

    virtual std::any visitCreate_module_statement(Db2Parser::Create_module_statementContext *context) = 0;

    virtual std::any visitCreate_nickname_statement(Db2Parser::Create_nickname_statementContext *context) = 0;

    virtual std::any visitNick_name_option_name(Db2Parser::Nick_name_option_nameContext *context) = 0;

    virtual std::any visitRemote_object_name(Db2Parser::Remote_object_nameContext *context) = 0;

    virtual std::any visitNon_relational_data_definition(Db2Parser::Non_relational_data_definitionContext *context) = 0;

    virtual std::any visitNick_name_column_list(Db2Parser::Nick_name_column_listContext *context) = 0;

    virtual std::any visitNick_name_column_list_item(Db2Parser::Nick_name_column_list_itemContext *context) = 0;

    virtual std::any visitNick_name_column_definition(Db2Parser::Nick_name_column_definitionContext *context) = 0;

    virtual std::any visitNick_name_column_options(Db2Parser::Nick_name_column_optionsContext *context) = 0;

    virtual std::any visitFederated_column_options(Db2Parser::Federated_column_optionsContext *context) = 0;

    virtual std::any visitColumn_option_name(Db2Parser::Column_option_nameContext *context) = 0;

    virtual std::any visitCreate_permission_statement(Db2Parser::Create_permission_statementContext *context) = 0;

    virtual std::any visitCreate_procedure_statement(Db2Parser::Create_procedure_statementContext *context) = 0;

    virtual std::any visitCreate_procedure_external_statement(Db2Parser::Create_procedure_external_statementContext *context) = 0;

    virtual std::any visitProc_ext_param_list(Db2Parser::Proc_ext_param_listContext *context) = 0;

    virtual std::any visitProc_ext_param(Db2Parser::Proc_ext_paramContext *context) = 0;

    virtual std::any visitOption_list_2(Db2Parser::Option_list_2Context *context) = 0;

    virtual std::any visitOption_list_2_item(Db2Parser::Option_list_2_itemContext *context) = 0;

    virtual std::any visitCreate_procedure_sourced_statement(Db2Parser::Create_procedure_sourced_statementContext *context) = 0;

    virtual std::any visitSource_procedure_clause(Db2Parser::Source_procedure_clauseContext *context) = 0;

    virtual std::any visitSource_object_name(Db2Parser::Source_object_nameContext *context) = 0;

    virtual std::any visitOption_list_1(Db2Parser::Option_list_1Context *context) = 0;

    virtual std::any visitOption_list_1_item(Db2Parser::Option_list_1_itemContext *context) = 0;

    virtual std::any visitResult_set_element_number(Db2Parser::Result_set_element_numberContext *context) = 0;

    virtual std::any visitUnique_id(Db2Parser::Unique_idContext *context) = 0;

    virtual std::any visitCreate_procedure_sql_statement(Db2Parser::Create_procedure_sql_statementContext *context) = 0;

    virtual std::any visitProc_parameter_list(Db2Parser::Proc_parameter_listContext *context) = 0;

    virtual std::any visitProc_parameter_list_item(Db2Parser::Proc_parameter_list_itemContext *context) = 0;

    virtual std::any visitIn_out_inout(Db2Parser::In_out_inoutContext *context) = 0;

    virtual std::any visitOption_list(Db2Parser::Option_listContext *context) = 0;

    virtual std::any visitOption_list_item(Db2Parser::Option_list_itemContext *context) = 0;

    virtual std::any visitSql_procedure_body(Db2Parser::Sql_procedure_bodyContext *context) = 0;

    virtual std::any visitCreate_role_statement(Db2Parser::Create_role_statementContext *context) = 0;

    virtual std::any visitCreate_schema_statement(Db2Parser::Create_schema_statementContext *context) = 0;

    virtual std::any visitSchema_sql_statement(Db2Parser::Schema_sql_statementContext *context) = 0;

    virtual std::any visitCreate_security_label_component_statement(Db2Parser::Create_security_label_component_statementContext *context) = 0;

    virtual std::any visitArray_clause(Db2Parser::Array_clauseContext *context) = 0;

    virtual std::any visitSet_clause(Db2Parser::Set_clauseContext *context) = 0;

    virtual std::any visitTree_clause(Db2Parser::Tree_clauseContext *context) = 0;

    virtual std::any visitTree_clause_item(Db2Parser::Tree_clause_itemContext *context) = 0;

    virtual std::any visitCreate_security_label_statement(Db2Parser::Create_security_label_statementContext *context) = 0;

    virtual std::any visitCreate_security_label_item(Db2Parser::Create_security_label_itemContext *context) = 0;

    virtual std::any visitCreate_security_policy_statement(Db2Parser::Create_security_policy_statementContext *context) = 0;

    virtual std::any visitCreate_sequence_statement(Db2Parser::Create_sequence_statementContext *context) = 0;

    virtual std::any visitCreate_sequence_opts(Db2Parser::Create_sequence_optsContext *context) = 0;

    virtual std::any visitCreate_sequence_opts_item(Db2Parser::Create_sequence_opts_itemContext *context) = 0;

    virtual std::any visitCreate_service_class_statement(Db2Parser::Create_service_class_statementContext *context) = 0;

    virtual std::any visitHigh_medium_low(Db2Parser::High_medium_lowContext *context) = 0;

    virtual std::any visitOn_off(Db2Parser::On_offContext *context) = 0;

    virtual std::any visitSoft_hard(Db2Parser::Soft_hardContext *context) = 0;

    virtual std::any visitCreate_server_statement(Db2Parser::Create_server_statementContext *context) = 0;

    virtual std::any visitPassword_(Db2Parser::Password_Context *context) = 0;

    virtual std::any visitCreate_stogroup_statement(Db2Parser::Create_stogroup_statementContext *context) = 0;

    virtual std::any visitCreate_stogroup_opts(Db2Parser::Create_stogroup_optsContext *context) = 0;

    virtual std::any visitCreate_synonym_statement(Db2Parser::Create_synonym_statementContext *context) = 0;

    virtual std::any visitCreate_table_statement(Db2Parser::Create_table_statementContext *context) = 0;

    virtual std::any visitCreate_table_opts(Db2Parser::Create_table_optsContext *context) = 0;

    virtual std::any visitTable_option_list(Db2Parser::Table_option_listContext *context) = 0;

    virtual std::any visitTable_option_list_item(Db2Parser::Table_option_list_itemContext *context) = 0;

    virtual std::any visitTable_option_name(Db2Parser::Table_option_nameContext *context) = 0;

    virtual std::any visitElement_list(Db2Parser::Element_listContext *context) = 0;

    virtual std::any visitElement_list_item(Db2Parser::Element_list_itemContext *context) = 0;

    virtual std::any visitColumn_definition(Db2Parser::Column_definitionContext *context) = 0;

    virtual std::any visitPeriod_definition(Db2Parser::Period_definitionContext *context) = 0;

    virtual std::any visitUnique_constraint(Db2Parser::Unique_constraintContext *context) = 0;

    virtual std::any visitReferential_constraint(Db2Parser::Referential_constraintContext *context) = 0;

    virtual std::any visitCheck_constraint(Db2Parser::Check_constraintContext *context) = 0;

    virtual std::any visitColumn_options(Db2Parser::Column_optionsContext *context) = 0;

    virtual std::any visitColumn_options_item(Db2Parser::Column_options_itemContext *context) = 0;

    virtual std::any visitReferences_clause(Db2Parser::References_clauseContext *context) = 0;

    virtual std::any visitRule_clause(Db2Parser::Rule_clauseContext *context) = 0;

    virtual std::any visitConstraint_attributes(Db2Parser::Constraint_attributesContext *context) = 0;

    virtual std::any visitDefault_clause(Db2Parser::Default_clauseContext *context) = 0;

    virtual std::any visitDefault_values(Db2Parser::Default_valuesContext *context) = 0;

    virtual std::any visitGenerated_clause(Db2Parser::Generated_clauseContext *context) = 0;

    virtual std::any visitDatetime_special_register(Db2Parser::Datetime_special_registerContext *context) = 0;

    virtual std::any visitUser_special_register(Db2Parser::User_special_registerContext *context) = 0;

    virtual std::any visitCast_function(Db2Parser::Cast_functionContext *context) = 0;

    virtual std::any visitIdentity_options(Db2Parser::Identity_optionsContext *context) = 0;

    virtual std::any visitIdentity_options_item(Db2Parser::Identity_options_itemContext *context) = 0;

    virtual std::any visitAs_row_change_timestamp_clause(Db2Parser::As_row_change_timestamp_clauseContext *context) = 0;

    virtual std::any visitAs_generated_expression_clause(Db2Parser::As_generated_expression_clauseContext *context) = 0;

    virtual std::any visitGeneration_expression(Db2Parser::Generation_expressionContext *context) = 0;

    virtual std::any visitAs_row_transaction_timestamp_clause(Db2Parser::As_row_transaction_timestamp_clauseContext *context) = 0;

    virtual std::any visitAs_row_transaction_start_id_clause(Db2Parser::As_row_transaction_start_id_clauseContext *context) = 0;

    virtual std::any visitOid_column_definition(Db2Parser::Oid_column_definitionContext *context) = 0;

    virtual std::any visitRange_partition_spec(Db2Parser::Range_partition_specContext *context) = 0;

    virtual std::any visitPartition_expression_list(Db2Parser::Partition_expression_listContext *context) = 0;

    virtual std::any visitPartition_expression(Db2Parser::Partition_expressionContext *context) = 0;

    virtual std::any visitPartition_element_list(Db2Parser::Partition_element_listContext *context) = 0;

    virtual std::any visitPartition_element(Db2Parser::Partition_elementContext *context) = 0;

    virtual std::any visitBoundary_spec(Db2Parser::Boundary_specContext *context) = 0;

    virtual std::any visitPartition_tablespace_options(Db2Parser::Partition_tablespace_optionsContext *context) = 0;

    virtual std::any visitDuration_label(Db2Parser::Duration_labelContext *context) = 0;

    virtual std::any visitStarting_clause(Db2Parser::Starting_clauseContext *context) = 0;

    virtual std::any visitConst_min_max_list(Db2Parser::Const_min_max_listContext *context) = 0;

    virtual std::any visitConst_min_max(Db2Parser::Const_min_maxContext *context) = 0;

    virtual std::any visitEnding_clause(Db2Parser::Ending_clauseContext *context) = 0;

    virtual std::any visitTyped_table_options(Db2Parser::Typed_table_optionsContext *context) = 0;

    virtual std::any visitTyped_element_list(Db2Parser::Typed_element_listContext *context) = 0;

    virtual std::any visitTyped_element_list_item(Db2Parser::Typed_element_list_itemContext *context) = 0;

    virtual std::any visitAs_result_table(Db2Parser::As_result_tableContext *context) = 0;

    virtual std::any visitCopy_options(Db2Parser::Copy_optionsContext *context) = 0;

    virtual std::any visitMaterialized_query_options(Db2Parser::Materialized_query_optionsContext *context) = 0;

    virtual std::any visitStaging_table_definition(Db2Parser::Staging_table_definitionContext *context) = 0;

    virtual std::any visitDimensions_clause(Db2Parser::Dimensions_clauseContext *context) = 0;

    virtual std::any visitCol_names(Db2Parser::Col_namesContext *context) = 0;

    virtual std::any visitSequence_key_spec(Db2Parser::Sequence_key_specContext *context) = 0;

    virtual std::any visitSequence_key_spec_list(Db2Parser::Sequence_key_spec_listContext *context) = 0;

    virtual std::any visitSequence_key_spec_list_item(Db2Parser::Sequence_key_spec_list_itemContext *context) = 0;

    virtual std::any visitTablespace_clauses(Db2Parser::Tablespace_clausesContext *context) = 0;

    virtual std::any visitDistribution_clause(Db2Parser::Distribution_clauseContext *context) = 0;

    virtual std::any visitPartitioning_clause(Db2Parser::Partitioning_clauseContext *context) = 0;

    virtual std::any visitIf_not_exists(Db2Parser::If_not_existsContext *context) = 0;

    virtual std::any visitCreate_tablespace_statement(Db2Parser::Create_tablespace_statementContext *context) = 0;

    virtual std::any visitStorage_group(Db2Parser::Storage_groupContext *context) = 0;

    virtual std::any visitSize_attributes(Db2Parser::Size_attributesContext *context) = 0;

    virtual std::any visitSystem_containers(Db2Parser::System_containersContext *context) = 0;

    virtual std::any visitContainer_string_list(Db2Parser::Container_string_listContext *context) = 0;

    virtual std::any visitDatabase_containers(Db2Parser::Database_containersContext *context) = 0;

    virtual std::any visitContainer_clause(Db2Parser::Container_clauseContext *context) = 0;

    virtual std::any visitContainer_clause_list(Db2Parser::Container_clause_listContext *context) = 0;

    virtual std::any visitContainer_clause_list_item(Db2Parser::Container_clause_list_itemContext *context) = 0;

    virtual std::any visitOn_db_partitions_clause(Db2Parser::On_db_partitions_clauseContext *context) = 0;

    virtual std::any visitDb_partition_number_list(Db2Parser::Db_partition_number_listContext *context) = 0;

    virtual std::any visitDb_partition_number_list_item(Db2Parser::Db_partition_number_list_itemContext *context) = 0;

    virtual std::any visitDb_partition_number(Db2Parser::Db_partition_numberContext *context) = 0;

    virtual std::any visitNumber_of_pages(Db2Parser::Number_of_pagesContext *context) = 0;

    virtual std::any visitNumber_of_files(Db2Parser::Number_of_filesContext *context) = 0;

    virtual std::any visitNumber_of_milliseconds(Db2Parser::Number_of_millisecondsContext *context) = 0;

    virtual std::any visitNumber_megabytes_per_second(Db2Parser::Number_megabytes_per_secondContext *context) = 0;

    virtual std::any visitCreate_threshold_statement(Db2Parser::Create_threshold_statementContext *context) = 0;

    virtual std::any visitThreshold_domain(Db2Parser::Threshold_domainContext *context) = 0;

    virtual std::any visitStatement_text(Db2Parser::Statement_textContext *context) = 0;

    virtual std::any visitExecutable_id(Db2Parser::Executable_idContext *context) = 0;

    virtual std::any visitEnforcement_scope(Db2Parser::Enforcement_scopeContext *context) = 0;

    virtual std::any visitThreshold_predicate(Db2Parser::Threshold_predicateContext *context) = 0;

    virtual std::any visitChecking_every(Db2Parser::Checking_everyContext *context) = 0;

    virtual std::any visitHour_to_seconds(Db2Parser::Hour_to_secondsContext *context) = 0;

    virtual std::any visitDay_to_minutes(Db2Parser::Day_to_minutesContext *context) = 0;

    virtual std::any visitDay_to_seconds(Db2Parser::Day_to_secondsContext *context) = 0;

    virtual std::any visitThreshold_exceeded_actions_2(Db2Parser::Threshold_exceeded_actions_2Context *context) = 0;

    virtual std::any visitDetails_section(Db2Parser::Details_sectionContext *context) = 0;

    virtual std::any visitRemap_activity_action(Db2Parser::Remap_activity_actionContext *context) = 0;

    virtual std::any visitCreate_transform_statement(Db2Parser::Create_transform_statementContext *context) = 0;

    virtual std::any visitTranform_list(Db2Parser::Tranform_listContext *context) = 0;

    virtual std::any visitTranform_list_item(Db2Parser::Tranform_list_itemContext *context) = 0;

    virtual std::any visitTransform_group_list(Db2Parser::Transform_group_listContext *context) = 0;

    virtual std::any visitTransform_group_list_item(Db2Parser::Transform_group_list_itemContext *context) = 0;

    virtual std::any visitCreate_trigger_statement(Db2Parser::Create_trigger_statementContext *context) = 0;

    virtual std::any visitRef_list(Db2Parser::Ref_listContext *context) = 0;

    virtual std::any visitRef_list_item(Db2Parser::Ref_list_itemContext *context) = 0;

    virtual std::any visitOld_new(Db2Parser::Old_newContext *context) = 0;

    virtual std::any visitCorrelation_name(Db2Parser::Correlation_nameContext *context) = 0;

    virtual std::any visitIdentifier(Db2Parser::IdentifierContext *context) = 0;

    virtual std::any visitTrigger_event(Db2Parser::Trigger_eventContext *context) = 0;

    virtual std::any visitTriggered_action(Db2Parser::Triggered_actionContext *context) = 0;

    virtual std::any visitSql_procedure_statement(Db2Parser::Sql_procedure_statementContext *context) = 0;

    virtual std::any visitSql_function_statement(Db2Parser::Sql_function_statementContext *context) = 0;

    virtual std::any visitCreate_trusted_context_statement(Db2Parser::Create_trusted_context_statementContext *context) = 0;

    virtual std::any visitAttr_list(Db2Parser::Attr_listContext *context) = 0;

    virtual std::any visitAttr_list_item(Db2Parser::Attr_list_itemContext *context) = 0;

    virtual std::any visitAuth_list(Db2Parser::Auth_listContext *context) = 0;

    virtual std::any visitAuth_list_item(Db2Parser::Auth_list_itemContext *context) = 0;

    virtual std::any visitAddress_value(Db2Parser::Address_valueContext *context) = 0;

    virtual std::any visitEncryption_value(Db2Parser::Encryption_valueContext *context) = 0;

    virtual std::any visitCreate_type_statement(Db2Parser::Create_type_statementContext *context) = 0;

    virtual std::any visitCreate_type_array_statement(Db2Parser::Create_type_array_statementContext *context) = 0;

    virtual std::any visitCreate_type_cursor_statement(Db2Parser::Create_type_cursor_statementContext *context) = 0;

    virtual std::any visitCreate_type_distinct_statement(Db2Parser::Create_type_distinct_statementContext *context) = 0;

    virtual std::any visitCreate_type_row_statement(Db2Parser::Create_type_row_statementContext *context) = 0;

    virtual std::any visitField_definition_list_paren(Db2Parser::Field_definition_list_parenContext *context) = 0;

    virtual std::any visitField_definition_list(Db2Parser::Field_definition_listContext *context) = 0;

    virtual std::any visitField_definition(Db2Parser::Field_definitionContext *context) = 0;

    virtual std::any visitCreate_type_structured_statement(Db2Parser::Create_type_structured_statementContext *context) = 0;

    virtual std::any visitStructured_type_seq(Db2Parser::Structured_type_seqContext *context) = 0;

    virtual std::any visitAttribute_definition_list_paren(Db2Parser::Attribute_definition_list_parenContext *context) = 0;

    virtual std::any visitAttribute_definition_list(Db2Parser::Attribute_definition_listContext *context) = 0;

    virtual std::any visitAttribute_definition(Db2Parser::Attribute_definitionContext *context) = 0;

    virtual std::any visitMethod_specification_list(Db2Parser::Method_specification_listContext *context) = 0;

    virtual std::any visitMethod_specification(Db2Parser::Method_specificationContext *context) = 0;

    virtual std::any visitMethod_specification_seq(Db2Parser::Method_specification_seqContext *context) = 0;

    virtual std::any visitAs_locator(Db2Parser::As_locatorContext *context) = 0;

    virtual std::any visitParam_decl_list_paren(Db2Parser::Param_decl_list_parenContext *context) = 0;

    virtual std::any visitParam_decl_list(Db2Parser::Param_decl_listContext *context) = 0;

    virtual std::any visitParam_decl(Db2Parser::Param_declContext *context) = 0;

    virtual std::any visitSql_routine_characteristics(Db2Parser::Sql_routine_characteristicsContext *context) = 0;

    virtual std::any visitExternal_routine_characteristics(Db2Parser::External_routine_characteristicsContext *context) = 0;

    virtual std::any visitLength(Db2Parser::LengthContext *context) = 0;

    virtual std::any visitRep_type(Db2Parser::Rep_typeContext *context) = 0;

    virtual std::any visitVarchars(Db2Parser::VarcharsContext *context) = 0;

    virtual std::any visitVarbinaries(Db2Parser::VarbinariesContext *context) = 0;

    virtual std::any visitFor_bit_data(Db2Parser::For_bit_dataContext *context) = 0;

    virtual std::any visitLob_options(Db2Parser::Lob_optionsContext *context) = 0;

    virtual std::any visitCreate_type_mapping_statement(Db2Parser::Create_type_mapping_statementContext *context) = 0;

    virtual std::any visitFor_bit_data_precision(Db2Parser::For_bit_data_precisionContext *context) = 0;

    virtual std::any visitPrecision(Db2Parser::PrecisionContext *context) = 0;

    virtual std::any visitScale(Db2Parser::ScaleContext *context) = 0;

    virtual std::any visitPrecision_scale_comp(Db2Parser::Precision_scale_compContext *context) = 0;

    virtual std::any visitFrom_to(Db2Parser::From_toContext *context) = 0;

    virtual std::any visitData_source_data_type(Db2Parser::Data_source_data_typeContext *context) = 0;

    virtual std::any visitLocal_data_type(Db2Parser::Local_data_typeContext *context) = 0;

    virtual std::any visitRemote_server(Db2Parser::Remote_serverContext *context) = 0;

    virtual std::any visitServer_version(Db2Parser::Server_versionContext *context) = 0;

    virtual std::any visitServer_type(Db2Parser::Server_typeContext *context) = 0;

    virtual std::any visitVersion(Db2Parser::VersionContext *context) = 0;

    virtual std::any visitRelease(Db2Parser::ReleaseContext *context) = 0;

    virtual std::any visitMod(Db2Parser::ModContext *context) = 0;

    virtual std::any visitCreate_usage_list_statement(Db2Parser::Create_usage_list_statementContext *context) = 0;

    virtual std::any visitCreate_user_mapping_statement(Db2Parser::Create_user_mapping_statementContext *context) = 0;

    virtual std::any visitUser_mapping_options_paren(Db2Parser::User_mapping_options_parenContext *context) = 0;

    virtual std::any visitUser_mapping_options(Db2Parser::User_mapping_optionsContext *context) = 0;

    virtual std::any visitCreate_variable_statement(Db2Parser::Create_variable_statementContext *context) = 0;

    virtual std::any visitConstant_(Db2Parser::Constant_Context *context) = 0;

    virtual std::any visitSpecial_register(Db2Parser::Special_registerContext *context) = 0;

    virtual std::any visitGlobal_variable(Db2Parser::Global_variableContext *context) = 0;

    virtual std::any visitData_type_1(Db2Parser::Data_type_1Context *context) = 0;

    virtual std::any visitCursor_value_constructor(Db2Parser::Cursor_value_constructorContext *context) = 0;

    virtual std::any visitAnchored_variable_data_type(Db2Parser::Anchored_variable_data_typeContext *context) = 0;

    virtual std::any visitHoldability(Db2Parser::HoldabilityContext *context) = 0;

    virtual std::any visitReturnability(Db2Parser::ReturnabilityContext *context) = 0;

    virtual std::any visitCreate_view_statement(Db2Parser::Create_view_statementContext *context) = 0;

    virtual std::any visitCreate_view_seq(Db2Parser::Create_view_seqContext *context) = 0;

    virtual std::any visitFullselect(Db2Parser::FullselectContext *context) = 0;

    virtual std::any visitSubselect(Db2Parser::SubselectContext *context) = 0;

    virtual std::any visitSelect_clause(Db2Parser::Select_clauseContext *context) = 0;

    virtual std::any visitSelect_clause_item(Db2Parser::Select_clause_itemContext *context) = 0;

    virtual std::any visitFrom_clause(Db2Parser::From_clauseContext *context) = 0;

    virtual std::any visitTable_reference(Db2Parser::Table_referenceContext *context) = 0;

    virtual std::any visitTable_reference_list(Db2Parser::Table_reference_listContext *context) = 0;

    virtual std::any visitSingles_table_reference(Db2Parser::Singles_table_referenceContext *context) = 0;

    virtual std::any visitPeriod_specification(Db2Parser::Period_specificationContext *context) = 0;

    virtual std::any visitValue(Db2Parser::ValueContext *context) = 0;

    virtual std::any visitCorrelation_clause(Db2Parser::Correlation_clauseContext *context) = 0;

    virtual std::any visitTablesample_clause(Db2Parser::Tablesample_clauseContext *context) = 0;

    virtual std::any visitNumeric_expression(Db2Parser::Numeric_expressionContext *context) = 0;

    virtual std::any visitSingle_view_reference(Db2Parser::Single_view_referenceContext *context) = 0;

    virtual std::any visitSingle_nickname_reference(Db2Parser::Single_nickname_referenceContext *context) = 0;

    virtual std::any visitOnly_table_reference(Db2Parser::Only_table_referenceContext *context) = 0;

    virtual std::any visitOuter_table_reference(Db2Parser::Outer_table_referenceContext *context) = 0;

    virtual std::any visitAnalyze_table_reference(Db2Parser::Analyze_table_referenceContext *context) = 0;

    virtual std::any visitImplementation_clause(Db2Parser::Implementation_clauseContext *context) = 0;

    virtual std::any visitNested_table_reference(Db2Parser::Nested_table_referenceContext *context) = 0;

    virtual std::any visitContinue_handler(Db2Parser::Continue_handlerContext *context) = 0;

    virtual std::any visitSpecific_condition_value(Db2Parser::Specific_condition_valueContext *context) = 0;

    virtual std::any visitData_change_table_reference(Db2Parser::Data_change_table_referenceContext *context) = 0;

    virtual std::any visitSearched_update_statement(Db2Parser::Searched_update_statementContext *context) = 0;

    virtual std::any visitSearched_delete_statement(Db2Parser::Searched_delete_statementContext *context) = 0;

    virtual std::any visitFinal_new(Db2Parser::Final_newContext *context) = 0;

    virtual std::any visitFinal_new_old(Db2Parser::Final_new_oldContext *context) = 0;

    virtual std::any visitTable_function_reference(Db2Parser::Table_function_referenceContext *context) = 0;

    virtual std::any visitTable_udf_cardinality_clause(Db2Parser::Table_udf_cardinality_clauseContext *context) = 0;

    virtual std::any visitTyped_correlation_clause(Db2Parser::Typed_correlation_clauseContext *context) = 0;

    virtual std::any visitColumn_name_data_type(Db2Parser::Column_name_data_typeContext *context) = 0;

    virtual std::any visitCollection_derived_table(Db2Parser::Collection_derived_tableContext *context) = 0;

    virtual std::any visitTable_function(Db2Parser::Table_functionContext *context) = 0;

    virtual std::any visitXmltable_expression(Db2Parser::Xmltable_expressionContext *context) = 0;

    virtual std::any visitXmltable_function(Db2Parser::Xmltable_functionContext *context) = 0;

    virtual std::any visitJoined_table(Db2Parser::Joined_tableContext *context) = 0;

    virtual std::any visitJoin_condition(Db2Parser::Join_conditionContext *context) = 0;

    virtual std::any visitOuter(Db2Parser::OuterContext *context) = 0;

    virtual std::any visitExternal_table_reference(Db2Parser::External_table_referenceContext *context) = 0;

    virtual std::any visitColumn_definition_2(Db2Parser::Column_definition_2Context *context) = 0;

    virtual std::any visitFile_name(Db2Parser::File_nameContext *context) = 0;

    virtual std::any visitWhere_clause(Db2Parser::Where_clauseContext *context) = 0;

    virtual std::any visitGroup_by_clause(Db2Parser::Group_by_clauseContext *context) = 0;

    virtual std::any visitGroup_by_clause_opts(Db2Parser::Group_by_clause_optsContext *context) = 0;

    virtual std::any visitGrouping_expression(Db2Parser::Grouping_expressionContext *context) = 0;

    virtual std::any visitGrouping_sets(Db2Parser::Grouping_setsContext *context) = 0;

    virtual std::any visitSuper_groups(Db2Parser::Super_groupsContext *context) = 0;

    virtual std::any visitGrant_total(Db2Parser::Grant_totalContext *context) = 0;

    virtual std::any visitHaving_clause(Db2Parser::Having_clauseContext *context) = 0;

    virtual std::any visitOrder_by_clause(Db2Parser::Order_by_clauseContext *context) = 0;

    virtual std::any visitOrder_by_clause_opts(Db2Parser::Order_by_clause_optsContext *context) = 0;

    virtual std::any visitTable_designator(Db2Parser::Table_designatorContext *context) = 0;

    virtual std::any visitAsc_desc(Db2Parser::Asc_descContext *context) = 0;

    virtual std::any visitFirst_last(Db2Parser::First_lastContext *context) = 0;

    virtual std::any visitSort_key(Db2Parser::Sort_keyContext *context) = 0;

    virtual std::any visitSimple_column_name(Db2Parser::Simple_column_nameContext *context) = 0;

    virtual std::any visitSimple_integer(Db2Parser::Simple_integerContext *context) = 0;

    virtual std::any visitSork_key_expression(Db2Parser::Sork_key_expressionContext *context) = 0;

    virtual std::any visitOffset_clause(Db2Parser::Offset_clauseContext *context) = 0;

    virtual std::any visitOffset_row_count(Db2Parser::Offset_row_countContext *context) = 0;

    virtual std::any visitFetch_clause(Db2Parser::Fetch_clauseContext *context) = 0;

    virtual std::any visitFetch_row_count(Db2Parser::Fetch_row_countContext *context) = 0;

    virtual std::any visitRow_rows(Db2Parser::Row_rowsContext *context) = 0;

    virtual std::any visitIsolation_clause(Db2Parser::Isolation_clauseContext *context) = 0;

    virtual std::any visitLock_request_clause(Db2Parser::Lock_request_clauseContext *context) = 0;

    virtual std::any visitValues_clause(Db2Parser::Values_clauseContext *context) = 0;

    virtual std::any visitValues_row(Db2Parser::Values_rowContext *context) = 0;

    virtual std::any visitRoot_view_definition(Db2Parser::Root_view_definitionContext *context) = 0;

    virtual std::any visitSubview_definition(Db2Parser::Subview_definitionContext *context) = 0;

    virtual std::any visitOid_column(Db2Parser::Oid_columnContext *context) = 0;

    virtual std::any visitWith_options(Db2Parser::With_optionsContext *context) = 0;

    virtual std::any visitWith_option_def(Db2Parser::With_option_defContext *context) = 0;

    virtual std::any visitWith_option_scope_def(Db2Parser::With_option_scope_defContext *context) = 0;

    virtual std::any visitUnder_clause(Db2Parser::Under_clauseContext *context) = 0;

    virtual std::any visitCreate_work_action_set_statement(Db2Parser::Create_work_action_set_statementContext *context) = 0;

    virtual std::any visitWork_action_definition_list_paren(Db2Parser::Work_action_definition_list_parenContext *context) = 0;

    virtual std::any visitWork_action_definition_list(Db2Parser::Work_action_definition_listContext *context) = 0;

    virtual std::any visitWork_action_definition(Db2Parser::Work_action_definitionContext *context) = 0;

    virtual std::any visitAction_types_clause(Db2Parser::Action_types_clauseContext *context) = 0;

    virtual std::any visitThreshold_types_clause(Db2Parser::Threshold_types_clauseContext *context) = 0;

    virtual std::any visitSecond_seconds(Db2Parser::Second_secondsContext *context) = 0;

    virtual std::any visitHours_minutes(Db2Parser::Hours_minutesContext *context) = 0;

    virtual std::any visitThreshold_exceeded_actions(Db2Parser::Threshold_exceeded_actionsContext *context) = 0;

    virtual std::any visitCollect_activity_data_clause(Db2Parser::Collect_activity_data_clauseContext *context) = 0;

    virtual std::any visitWith_without(Db2Parser::With_withoutContext *context) = 0;

    virtual std::any visitHistogram_templace_clause(Db2Parser::Histogram_templace_clauseContext *context) = 0;

    virtual std::any visitCreate_work_class_set_statement(Db2Parser::Create_work_class_set_statementContext *context) = 0;

    virtual std::any visitWork_class_definition_list_paren(Db2Parser::Work_class_definition_list_parenContext *context) = 0;

    virtual std::any visitWork_class_definition_list(Db2Parser::Work_class_definition_listContext *context) = 0;

    virtual std::any visitWork_class_definition(Db2Parser::Work_class_definitionContext *context) = 0;

    virtual std::any visitWork_attributes(Db2Parser::Work_attributesContext *context) = 0;

    virtual std::any visitPosition_clause(Db2Parser::Position_clauseContext *context) = 0;

    virtual std::any visitPosition_(Db2Parser::Position_Context *context) = 0;

    virtual std::any visitFor_from_to_clause(Db2Parser::For_from_to_clauseContext *context) = 0;

    virtual std::any visitFrom_value(Db2Parser::From_valueContext *context) = 0;

    virtual std::any visitTo_value(Db2Parser::To_valueContext *context) = 0;

    virtual std::any visitData_tag_clause(Db2Parser::Data_tag_clauseContext *context) = 0;

    virtual std::any visitSchema_clause(Db2Parser::Schema_clauseContext *context) = 0;

    virtual std::any visitCreate_workload_statement(Db2Parser::Create_workload_statementContext *context) = 0;

    virtual std::any visitPkg_exec_seq(Db2Parser::Pkg_exec_seqContext *context) = 0;

    virtual std::any visitPosition_clause_2(Db2Parser::Position_clause_2Context *context) = 0;

    virtual std::any visitConnection_attributes(Db2Parser::Connection_attributesContext *context) = 0;

    virtual std::any visitString_list(Db2Parser::String_listContext *context) = 0;

    virtual std::any visitString_list_paren(Db2Parser::String_list_parenContext *context) = 0;

    virtual std::any visitWorkload_attributes(Db2Parser::Workload_attributesContext *context) = 0;

    virtual std::any visitDegree(Db2Parser::DegreeContext *context) = 0;

    virtual std::any visitAllow_disallow(Db2Parser::Allow_disallowContext *context) = 0;

    virtual std::any visitCollect_on_clause(Db2Parser::Collect_on_clauseContext *context) = 0;

    virtual std::any visitCollect_details_clause(Db2Parser::Collect_details_clauseContext *context) = 0;

    virtual std::any visitCollect_lock_wait_options(Db2Parser::Collect_lock_wait_optionsContext *context) = 0;

    virtual std::any visitWait_time(Db2Parser::Wait_timeContext *context) = 0;

    virtual std::any visitCreate_wrapper_statement(Db2Parser::Create_wrapper_statementContext *context) = 0;

    virtual std::any visitWrapper_option_list(Db2Parser::Wrapper_option_listContext *context) = 0;

    virtual std::any visitWrapper_option(Db2Parser::Wrapper_optionContext *context) = 0;

    virtual std::any visitExpression(Db2Parser::ExpressionContext *context) = 0;

    virtual std::any visitFunction_invocation(Db2Parser::Function_invocationContext *context) = 0;

    virtual std::any visitAll_distinct(Db2Parser::All_distinctContext *context) = 0;

    virtual std::any visitScalar_fullselect(Db2Parser::Scalar_fullselectContext *context) = 0;

    virtual std::any visitCast_specification(Db2Parser::Cast_specificationContext *context) = 0;

    virtual std::any visitCursor_cast_specification(Db2Parser::Cursor_cast_specificationContext *context) = 0;

    virtual std::any visitRow_cast_specification(Db2Parser::Row_cast_specificationContext *context) = 0;

    virtual std::any visitInterval_cast_specification(Db2Parser::Interval_cast_specificationContext *context) = 0;

    virtual std::any visitXmlcast_specification(Db2Parser::Xmlcast_specificationContext *context) = 0;

    virtual std::any visitArray_element_specification(Db2Parser::Array_element_specificationContext *context) = 0;

    virtual std::any visitArray_constructor(Db2Parser::Array_constructorContext *context) = 0;

    virtual std::any visitMethod_invocation(Db2Parser::Method_invocationContext *context) = 0;

    virtual std::any visitOlap_specification(Db2Parser::Olap_specificationContext *context) = 0;

    virtual std::any visitOrdered_olap_specification(Db2Parser::Ordered_olap_specificationContext *context) = 0;

    virtual std::any visitWindow_partition_clause(Db2Parser::Window_partition_clauseContext *context) = 0;

    virtual std::any visitWindow_order_clause(Db2Parser::Window_order_clauseContext *context) = 0;

    virtual std::any visitNumbering_specification(Db2Parser::Numbering_specificationContext *context) = 0;

    virtual std::any visitAggregation_specification(Db2Parser::Aggregation_specificationContext *context) = 0;

    virtual std::any visitOlap_aggregate_function(Db2Parser::Olap_aggregate_functionContext *context) = 0;

    virtual std::any visitFirst_value_function(Db2Parser::First_value_functionContext *context) = 0;

    virtual std::any visitLast_value_function(Db2Parser::Last_value_functionContext *context) = 0;

    virtual std::any visitNth_value_function(Db2Parser::Nth_value_functionContext *context) = 0;

    virtual std::any visitRatio_to_report_function(Db2Parser::Ratio_to_report_functionContext *context) = 0;

    virtual std::any visitIgnore_respect_nulls(Db2Parser::Ignore_respect_nullsContext *context) = 0;

    virtual std::any visitFrom_first_last(Db2Parser::From_first_lastContext *context) = 0;

    virtual std::any visitWindow_aggregation_group_clause(Db2Parser::Window_aggregation_group_clauseContext *context) = 0;

    virtual std::any visitGroup_start(Db2Parser::Group_startContext *context) = 0;

    virtual std::any visitGroup_between(Db2Parser::Group_betweenContext *context) = 0;

    virtual std::any visitGroup_bound1(Db2Parser::Group_bound1Context *context) = 0;

    virtual std::any visitGroup_bound2(Db2Parser::Group_bound2Context *context) = 0;

    virtual std::any visitGroup_end(Db2Parser::Group_endContext *context) = 0;

    virtual std::any visitRow_change_expression(Db2Parser::Row_change_expressionContext *context) = 0;

    virtual std::any visitSequence_reference(Db2Parser::Sequence_referenceContext *context) = 0;

    virtual std::any visitSubtype_treatment(Db2Parser::Subtype_treatmentContext *context) = 0;

    virtual std::any visitExpression_list(Db2Parser::Expression_listContext *context) = 0;

    virtual std::any visitExpression_list_in_parentheses(Db2Parser::Expression_list_in_parenthesesContext *context) = 0;

    virtual std::any visitId_(Db2Parser::Id_Context *context) = 0;

    virtual std::any visitExposed_name(Db2Parser::Exposed_nameContext *context) = 0;

    virtual std::any visitName(Db2Parser::NameContext *context) = 0;

    virtual std::any visitLabel(Db2Parser::LabelContext *context) = 0;

    virtual std::any visitHost_label(Db2Parser::Host_labelContext *context) = 0;

    virtual std::any visitLibrary_name(Db2Parser::Library_nameContext *context) = 0;

    virtual std::any visitArray_type_name(Db2Parser::Array_type_nameContext *context) = 0;

    virtual std::any visitAttribute_name(Db2Parser::Attribute_nameContext *context) = 0;

    virtual std::any visitRow_type_name(Db2Parser::Row_type_nameContext *context) = 0;

    virtual std::any visitAuthorization_name(Db2Parser::Authorization_nameContext *context) = 0;

    virtual std::any visitBoolean_variable_name(Db2Parser::Boolean_variable_nameContext *context) = 0;

    virtual std::any visitArray_variable_name(Db2Parser::Array_variable_nameContext *context) = 0;

    virtual std::any visitColumn_name(Db2Parser::Column_nameContext *context) = 0;

    virtual std::any visitConstraint_name(Db2Parser::Constraint_nameContext *context) = 0;

    virtual std::any visitDescriptor_name(Db2Parser::Descriptor_nameContext *context) = 0;

    virtual std::any visitDistinct_type_name(Db2Parser::Distinct_type_nameContext *context) = 0;

    virtual std::any visitCursor_name(Db2Parser::Cursor_nameContext *context) = 0;

    virtual std::any visitCursor_type_name(Db2Parser::Cursor_type_nameContext *context) = 0;

    virtual std::any visitCondition_name(Db2Parser::Condition_nameContext *context) = 0;

    virtual std::any visitData_source_name(Db2Parser::Data_source_nameContext *context) = 0;

    virtual std::any visitExpression_name(Db2Parser::Expression_nameContext *context) = 0;

    virtual std::any visitGroup_name(Db2Parser::Group_nameContext *context) = 0;

    virtual std::any visitPolicy_name(Db2Parser::Policy_nameContext *context) = 0;

    virtual std::any visitBufferpool_name(Db2Parser::Bufferpool_nameContext *context) = 0;

    virtual std::any visitDb_partition_name(Db2Parser::Db_partition_nameContext *context) = 0;

    virtual std::any visitDatabase_name(Db2Parser::Database_nameContext *context) = 0;

    virtual std::any visitEvent_monitor_name(Db2Parser::Event_monitor_nameContext *context) = 0;

    virtual std::any visitField_name(Db2Parser::Field_nameContext *context) = 0;

    virtual std::any visitFor_loop_name(Db2Parser::For_loop_nameContext *context) = 0;

    virtual std::any visitFunction_name(Db2Parser::Function_nameContext *context) = 0;

    virtual std::any visitFunction_mapping_name(Db2Parser::Function_mapping_nameContext *context) = 0;

    virtual std::any visitGlobal_variable_name(Db2Parser::Global_variable_nameContext *context) = 0;

    virtual std::any visitHierarchy_name(Db2Parser::Hierarchy_nameContext *context) = 0;

    virtual std::any visitHost_variable_name(Db2Parser::Host_variable_nameContext *context) = 0;

    virtual std::any visitParameter_marker(Db2Parser::Parameter_markerContext *context) = 0;

    virtual std::any visitTemplate_name(Db2Parser::Template_nameContext *context) = 0;

    virtual std::any visitIndex_name(Db2Parser::Index_nameContext *context) = 0;

    virtual std::any visitIndex_extension_name(Db2Parser::Index_extension_nameContext *context) = 0;

    virtual std::any visitInput_descriptor_name(Db2Parser::Input_descriptor_nameContext *context) = 0;

    virtual std::any visitMask_name(Db2Parser::Mask_nameContext *context) = 0;

    virtual std::any visitMethod_name(Db2Parser::Method_nameContext *context) = 0;

    virtual std::any visitModel_name(Db2Parser::Model_nameContext *context) = 0;

    virtual std::any visitModule_name(Db2Parser::Module_nameContext *context) = 0;

    virtual std::any visitNew_owner(Db2Parser::New_ownerContext *context) = 0;

    virtual std::any visitNick_name(Db2Parser::Nick_nameContext *context) = 0;

    virtual std::any visitObject_name(Db2Parser::Object_nameContext *context) = 0;

    virtual std::any visitOid_column_name(Db2Parser::Oid_column_nameContext *context) = 0;

    virtual std::any visitOptimization_profile_name(Db2Parser::Optimization_profile_nameContext *context) = 0;

    virtual std::any visitPackage_name(Db2Parser::Package_nameContext *context) = 0;

    virtual std::any visitPartition_name(Db2Parser::Partition_nameContext *context) = 0;

    virtual std::any visitPath_name(Db2Parser::Path_nameContext *context) = 0;

    virtual std::any visitPermission_name(Db2Parser::Permission_nameContext *context) = 0;

    virtual std::any visitPipe_name(Db2Parser::Pipe_nameContext *context) = 0;

    virtual std::any visitProcedure_name(Db2Parser::Procedure_nameContext *context) = 0;

    virtual std::any visitResult_descriptor_name(Db2Parser::Result_descriptor_nameContext *context) = 0;

    virtual std::any visitRole_name(Db2Parser::Role_nameContext *context) = 0;

    virtual std::any visitRoot_table_name(Db2Parser::Root_table_nameContext *context) = 0;

    virtual std::any visitRoot_view_name(Db2Parser::Root_view_nameContext *context) = 0;

    virtual std::any visitRow_variable_name(Db2Parser::Row_variable_nameContext *context) = 0;

    virtual std::any visitSource_schema_name(Db2Parser::Source_schema_nameContext *context) = 0;

    virtual std::any visitSource_package_name(Db2Parser::Source_package_nameContext *context) = 0;

    virtual std::any visitSource_procedure_name(Db2Parser::Source_procedure_nameContext *context) = 0;

    virtual std::any visitSql_parameter_name(Db2Parser::Sql_parameter_nameContext *context) = 0;

    virtual std::any visitSql_variable_name(Db2Parser::Sql_variable_nameContext *context) = 0;

    virtual std::any visitTransition_variable_name(Db2Parser::Transition_variable_nameContext *context) = 0;

    virtual std::any visitSavepoint_name(Db2Parser::Savepoint_nameContext *context) = 0;

    virtual std::any visitSpecific_name(Db2Parser::Specific_nameContext *context) = 0;

    virtual std::any visitSchema(Db2Parser::SchemaContext *context) = 0;

    virtual std::any visitSchema_name(Db2Parser::Schema_nameContext *context) = 0;

    virtual std::any visitSearch_method_name(Db2Parser::Search_method_nameContext *context) = 0;

    virtual std::any visitServer_name(Db2Parser::Server_nameContext *context) = 0;

    virtual std::any visitServer_option_name(Db2Parser::Server_option_nameContext *context) = 0;

    virtual std::any visitSession_authorization_name(Db2Parser::Session_authorization_nameContext *context) = 0;

    virtual std::any visitComponent_name(Db2Parser::Component_nameContext *context) = 0;

    virtual std::any visitSec_label_comp_name(Db2Parser::Sec_label_comp_nameContext *context) = 0;

    virtual std::any visitSecurity_policy_name(Db2Parser::Security_policy_nameContext *context) = 0;

    virtual std::any visitSecurity_label_name(Db2Parser::Security_label_nameContext *context) = 0;

    virtual std::any visitSequence_name(Db2Parser::Sequence_nameContext *context) = 0;

    virtual std::any visitService_class_name(Db2Parser::Service_class_nameContext *context) = 0;

    virtual std::any visitService_superclass_name(Db2Parser::Service_superclass_nameContext *context) = 0;

    virtual std::any visitStoragegroup_name(Db2Parser::Storagegroup_nameContext *context) = 0;

    virtual std::any visitSupertype_name(Db2Parser::Supertype_nameContext *context) = 0;

    virtual std::any visitSuperview_name(Db2Parser::Superview_nameContext *context) = 0;

    virtual std::any visitService_subclass_name(Db2Parser::Service_subclass_nameContext *context) = 0;

    virtual std::any visitStatement_name(Db2Parser::Statement_nameContext *context) = 0;

    virtual std::any visitTable_name(Db2Parser::Table_nameContext *context) = 0;

    virtual std::any visitTablespace_name(Db2Parser::Tablespace_nameContext *context) = 0;

    virtual std::any visitTarget_identifier(Db2Parser::Target_identifierContext *context) = 0;

    virtual std::any visitThreshold_name(Db2Parser::Threshold_nameContext *context) = 0;

    virtual std::any visitTrigger_name(Db2Parser::Trigger_nameContext *context) = 0;

    virtual std::any visitContext_name(Db2Parser::Context_nameContext *context) = 0;

    virtual std::any visitUsage_list_name(Db2Parser::Usage_list_nameContext *context) = 0;

    virtual std::any visitType_name(Db2Parser::Type_nameContext *context) = 0;

    virtual std::any visitType_mapping_name(Db2Parser::Type_mapping_nameContext *context) = 0;

    virtual std::any visitTyped_table_name(Db2Parser::Typed_table_nameContext *context) = 0;

    virtual std::any visitTyped_view_name(Db2Parser::Typed_view_nameContext *context) = 0;

    virtual std::any visitUser_mapping_option_name(Db2Parser::User_mapping_option_nameContext *context) = 0;

    virtual std::any visitView_name(Db2Parser::View_nameContext *context) = 0;

    virtual std::any visitVariable_name(Db2Parser::Variable_nameContext *context) = 0;

    virtual std::any visitWork_action_set_name(Db2Parser::Work_action_set_nameContext *context) = 0;

    virtual std::any visitWork_class_set_name(Db2Parser::Work_class_set_nameContext *context) = 0;

    virtual std::any visitWorkload_name(Db2Parser::Workload_nameContext *context) = 0;

    virtual std::any visitWork_action_name(Db2Parser::Work_action_nameContext *context) = 0;

    virtual std::any visitWork_class_name(Db2Parser::Work_class_nameContext *context) = 0;

    virtual std::any visitWrapper_name(Db2Parser::Wrapper_nameContext *context) = 0;

    virtual std::any visitWrapper_option_name(Db2Parser::Wrapper_option_nameContext *context) = 0;

    virtual std::any visitXsrobject_name(Db2Parser::Xsrobject_nameContext *context) = 0;

    virtual std::any visitParameter_name(Db2Parser::Parameter_nameContext *context) = 0;

    virtual std::any visitCursor_variable_name(Db2Parser::Cursor_variable_nameContext *context) = 0;

    virtual std::any visitAlias_name(Db2Parser::Alias_nameContext *context) = 0;

    virtual std::any visitDb_partition_group_name(Db2Parser::Db_partition_group_nameContext *context) = 0;

    virtual std::any visitSource_index_name(Db2Parser::Source_index_nameContext *context) = 0;

    virtual std::any visitSource_table_name(Db2Parser::Source_table_nameContext *context) = 0;

    virtual std::any visitSource_storagegroup_name(Db2Parser::Source_storagegroup_nameContext *context) = 0;

    virtual std::any visitTarget_storagegroup_name(Db2Parser::Target_storagegroup_nameContext *context) = 0;

    virtual std::any visitSource_tablespace_name(Db2Parser::Source_tablespace_nameContext *context) = 0;

    virtual std::any visitTarget_tablespace_name(Db2Parser::Target_tablespace_nameContext *context) = 0;

    virtual std::any visitUnqualified_function_name(Db2Parser::Unqualified_function_nameContext *context) = 0;

    virtual std::any visitUnqualified_procedure_name(Db2Parser::Unqualified_procedure_nameContext *context) = 0;

    virtual std::any visitUnqualified_specific_name(Db2Parser::Unqualified_specific_nameContext *context) = 0;

    virtual std::any visitPeriod_name(Db2Parser::Period_nameContext *context) = 0;

    virtual std::any visitHistory_table_name(Db2Parser::History_table_nameContext *context) = 0;

    virtual std::any visitXml_schema_name(Db2Parser::Xml_schema_nameContext *context) = 0;

    virtual std::any visitTodo(Db2Parser::TodoContext *context) = 0;


};

}  // namespace antlrcpp_db2
