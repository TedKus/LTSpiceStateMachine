.machine
    ; State Definitions:
    .state	state_a	0 ; comment
    .state	state_b	1 ; comment
    ; State Transition Rules:
    .rule	state_a	state_b	condition1 operator condition2
    .rule	state_a	state_b	condition1 operator condition2
    ; State Outputs:
    .output	(variable)	IF(state == 0,	condition1,	condition2)
    .output	(variable)	IF(state == 1,	condition1,	condition2)
.endmachine
