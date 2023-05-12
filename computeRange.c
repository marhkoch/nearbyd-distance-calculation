
void FUN_10014293c(long param_1,long param_2)

{
 int iVar1;
 long num;
 long t_reply_1;
 long t_round_1;
 long t_reply_2;
 long t_round_2;
 long denum;
 undefined8 uVar8;
 undefined4 local_b0;
 long local_ac;
 undefined2 local_a4;
 long local_a2;
 undefined2 local_9a;
 long local_98;
 undefined2 local_90;
 long local_8e;
 undefined2 local_86;
 long local_84;
 undefined2 local_7c;
 long local_7a;
 long local_68;
 
 uVar8 = DAT_1003e6830;
 local_68 = *(long *)PTR____stack_chk_guard_1003ad180;
 t_reply_1 = *(long *)(param_1 + 0x48);
 t_round_1 = *(long *)(param_1 + 0x40);
 t_reply_2 = *(long *)(param_2 + 0x48);
 t_round_2 = *(long *)(param_2 + 0x40);
 num = t_round_1 * t_round_2 - t_reply_1 * t_reply_2;
 denum = t_reply_2 + t_round_2 + t_round_1 + t_reply_1;
 iVar1 = _os_log_type_enabled(DAT_1003e6830,0);
 if (iVar1 != 0) {
  local_b0 = 0x8000600;
  local_a4 = 0x800;
  local_9a = 0x800;
  local_90 = 0x800;
  local_86 = 0x800;
  local_7c = 0x800;
  local_84 = num;
  local_8e = t_reply_1;
  local_98 = t_round_1;
  local_a2 = t_reply_2;
  local_ac = t_round_2;
  local_7a = denum;
  __os_log_impl(0x100000000,uVar8,0,
            "#me,RoseMeasurementEngine::computeRange: rtt_i %lld tat_i %lld rtt_r %lld tat_r % lld num %lld den %lld"
            ,&local_b0,0x3e);
 }
 uVar8 = DAT_1003e6830;
 if (denum == 0) {
  iVar1 = _os_log_type_enabled(DAT_1003e6830,0x10);
  if (iVar1 != 0) {
    FUN_1001438a4(uVar8);
  }
  uVar8 = 0x7ff8000000000000;
 }
 else {
  denum = FUN_1002379ec((long)((double)num / (double)denum));
  uVar8 = DAT_1003e6830;
  iVar1 = _os_log_type_enabled(DAT_1003e6830,0);
  if (iVar1 != 0) {
    local_a2 = FUN_10001e72c(denum);
    local_b0 = 0x8000200;
    local_a4 = 0x800;
    local_ac = denum;
    __os_log_impl(0x100000000,uVar8,0,
              "#me,RoseMeasurementEngine::computeRange: tofSec = %.6e rangeM = %.6e",&local_b0
              ,0x16);
  }
  uVar8 = FUN_10001e72c(denum);
 }
 if (*(long *)PTR____stack_chk_guard_1003ad180 == local_68) {
  return;
 }
              /* WARNING: Subroutine does not return */
 ___stack_chk_fail(uVar8);
}

 if (iVar1 != 0) {
  local_b0 = 0x8000600;
  local_a4 = 0x800;
  local_9a = 0x800;
  local_90 = 0x800;
  local_86 = 0x800;
  local_7c = 0x800;
  local_ac = lVar6;
  local_a2 = lVar5;
  local_98 = lVar4;
  local_8e = lVar3;
  local_84 = lVar2;
  local_7a = lVar7;
  __os_log_impl(0x100000000,uVar8,0,
            "#me,RoseMeasurementEngine::computeRange: rtt_i %lld tat_i %lld rtt_r %lld tat_r % lld num %lld den %lld"
            ,&local_b0,0x3e);






Compute Funktion:


void FUN_10014293c(long param_1,long param_2)

{
 int iVar1;
 long lVar2;
 long lVar3;
 long lVar4;
 long lVar5;
 long lVar6;
 long lVar7;
 undefined8 uVar8;
 undefined4 local_b0;
 long local_ac;
 undefined2 local_a4;
 long local_a2;
 undefined2 local_9a;
 long local_98;
 undefined2 local_90;
 long local_8e;
 undefined2 local_86;
 long local_84;
 undefined2 local_7c;
 long local_7a;
 long local_68;
 
 uVar8 = DAT_1003e6830;
 local_68 = *(long *)PTR____stack_chk_guard_1003ad180;
 lVar6 = *(long *)(param_2 + 0x40);
 lVar5 = *(long *)(param_2 + 0x48);
 lVar4 = *(long *)(param_1 + 0x40);
 lVar3 = *(long *)(param_1 + 0x48);
 lVar2 = lVar4 * lVar6 - lVar3 * lVar5;
 lVar7 = lVar5 + lVar6 + lVar4 + lVar3;
 iVar1 = _os_log_type_enabled(DAT_1003e6830,0);
 if (iVar1 != 0) {
  local_b0 = 0x8000600;
  local_a4 = 0x800;
  local_9a = 0x800;
  local_90 = 0x800;
  local_86 = 0x800;
  local_7c = 0x800;
  local_ac = lVar6;
  local_a2 = lVar5;
  local_98 = lVar4;
  local_8e = lVar3;
  local_84 = lVar2;
  local_7a = lVar7;
  __os_log_impl(0x100000000,uVar8,0,
            "#me,RoseMeasurementEngine::computeRange: rtt_i %lld tat_i %lld rtt_r %lld tat_r % lld num %lld den %lld"
            ,&local_b0,0x3e);
 }
 uVar8 = DAT_1003e6830;
 if (lVar7 == 0) {
  iVar1 = _os_log_type_enabled(DAT_1003e6830,0x10);
  if (iVar1 != 0) {
    FUN_1001438a4(uVar8);
  }
  uVar8 = 0x7ff8000000000000;
 }
 else {
  lVar7 = FUN_1002379ec((long)((double)lVar2 / (double)lVar7));
  uVar8 = DAT_1003e6830;
  iVar1 = _os_log_type_enabled(DAT_1003e6830,0);
  if (iVar1 != 0) {
    local_a2 = FUN_10001e72c(lVar7);
    local_b0 = 0x8000200;
    local_a4 = 0x800;
    local_ac = lVar7;
    __os_log_impl(0x100000000,uVar8,0,
              "#me,RoseMeasurementEngine::computeRange: tofSec = %.6e rangeM = %.6e",&local_b0
              ,0x16);
  }
  uVar8 = FUN_10001e72c(lVar7);
 }
 if (*(long *)PTR____stack_chk_guard_1003ad180 == local_68) {
  return;
 }
              /* WARNING: Subroutine does not return */
 ___stack_chk_fail(uVar8);
}



WTF Function:


double FUN_1002379ec(long param_1)

{
 return (double)param_1 / 998400000000.0;
}



Multiply_by_c Function:


double FUN_10001e72c(double param_1)

{
 return param_1 * 299792458.0;
}


