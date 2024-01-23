#include "yoga.h"

enum yoga_type
{
	YOGA_NODE = 300
};

void jsal_push_YGValue(YGValue value);
void yoga_init();
static void js_node_finalize(void* host_ptr);
static bool js_new_node(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_insert_child(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_swap_child(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_remove_child(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_remove_all_children(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_child(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_owner(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_parent(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_child_count(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_children(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_is_reference_baseline(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_is_reference_baseline(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_calculate_layout(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_mark_dirty(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_mark_dirty_and_propagate_to_descendants(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_copy_style(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_has_new_layout(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_has_new_layout(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_is_dirty(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_direction(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_direction(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_flex_direction(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_flex_direction(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_justify_content(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_justify_content(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_align_content(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_align_content(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_align_items(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_align_items(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_align_self(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_align_self(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_position_type(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_position_type(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_flex_wrap(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_flex_wrap(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_overflow(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_overflow(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_display(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_display(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_flex(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_flex(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_flex_grow(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_flex_grow(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_flex_shrink(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_flex_shrink(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_flex_basis(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_flex_basis_percent(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_flex_basis_auto(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_flex_basis(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_position(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_position_percent(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_position(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_margin(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_margin_percent(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_margin_auto(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_margin(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_padding(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_padding_percent(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_padding(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_border(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_border(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_gap(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_gap(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_width(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_width_percent(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_width_auto(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_width(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_height(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_height_percent(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_height_auto(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_height(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_min_width(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_min_width_percent(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_min_width(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_min_height(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_min_height_percent(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_min_height(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_max_width(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_max_width_percent(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_max_width(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_max_height(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_max_height_percent(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_max_height(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_set_aspect_ratio(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_get_aspect_ratio(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_layout_get_left(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_layout_get_top(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_layout_get_right(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_layout_get_bottom(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_layout_get_width(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_layout_get_height(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_layout_get_direction(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_layout_get_had_overflow(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_layout_get_margin(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_layout_get_border(int num_args, bool is_ctor, intptr_t magic);
static bool js_Node_layout_get_padding(int num_args, bool is_ctor, intptr_t magic);