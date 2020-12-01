/* THIS FILE IS GENERATED */
#include "Timer.h"
float Timer::get_time_left(){
	return (float) _wasgo_Timer_wrapper_get_time_left(wasgo_id);
}
Timer::TimerProcessMode Timer::get_timer_process_mode(){
	return Timer::TimerProcessMode::from_wasgo_id(_wasgo_Timer_wrapper_get_timer_process_mode(wasgo_id));
}
float Timer::get_wait_time(){
	return (float) _wasgo_Timer_wrapper_get_wait_time(wasgo_id);
}
bool Timer::has_autostart(){
	return (bool) _wasgo_Timer_wrapper_has_autostart(wasgo_id);
}
bool Timer::is_one_shot(){
	return (bool) _wasgo_Timer_wrapper_is_one_shot(wasgo_id);
}
bool Timer::is_paused(){
	return (bool) _wasgo_Timer_wrapper_is_paused(wasgo_id);
}
bool Timer::is_stopped(){
	return (bool) _wasgo_Timer_wrapper_is_stopped(wasgo_id);
}
void Timer::set_autostart(bool p_enable){
	_wasgo_Timer_wrapper_set_autostart(wasgo_id, p_enable);
}
void Timer::set_one_shot(bool p_enable){
	_wasgo_Timer_wrapper_set_one_shot(wasgo_id, p_enable);
}
void Timer::set_paused(bool p_paused){
	_wasgo_Timer_wrapper_set_paused(wasgo_id, p_paused);
}
void Timer::set_timer_process_mode(Timer::TimerProcessMode p_mode){
	_wasgo_Timer_wrapper_set_timer_process_mode(wasgo_id, ((Variant) p_mode).get_wasgo_id());
}
void Timer::set_wait_time(float p_time_sec){
	_wasgo_Timer_wrapper_set_wait_time(wasgo_id, p_time_sec);
}
void Timer::start(float p_time_sec = (float) -1){
	_wasgo_Timer_wrapper_start(wasgo_id, p_time_sec);
}
void Timer::stop(){
	_wasgo_Timer_wrapper_stop(wasgo_id);
}