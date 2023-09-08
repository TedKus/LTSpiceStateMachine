; type: .machine
.machine
    ; State Definitions:
    .state	state_a	state_a_value ; comment
    .state	state_b	state_b_value ; comment
    ; State Transition Rules:
    .rule	state_a	state_b	(condition1 operator condition2) ; comment
    .rule	state_b	state_a	(condition1 operator condition2) ; comment
    ; State Outputs:
    .output	(variable_name)	IF(state == state_a_value,	condition1,	condition2) ; comment
    .output	(variable_name)	IF(state == state_b_value,	condition1,	condition2) ; comment
.endmachine
; type: .state
.state	state_a	state_a_value ; comment
; type: .rule
.rule	start_state	finish_state 	(condition1 operator condition2)	; comment
; type: .output
.output	(variable_name)	IF(state == state_value, condition1, condition2) 	; comment
; type: .par
.param variable_name = value
