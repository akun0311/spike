/* Automatically generated by parse-opcodes */
switch((insn.bits >> 0x19) & 0x7f)
{
  case 0x0:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xffffffff) == 0x0)
        {
          #include "insns/unimp.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x60:
  {
    #include "insns/j.h"
    break;
  }
  case 0x61:
  {
    #include "insns/j.h"
    break;
  }
  case 0x62:
  {
    #include "insns/j.h"
    break;
  }
  case 0x63:
  {
    #include "insns/j.h"
    break;
  }
  case 0x64:
  {
    #include "insns/jal.h"
    break;
  }
  case 0x65:
  {
    #include "insns/jal.h"
    break;
  }
  case 0x66:
  {
    #include "insns/jal.h"
    break;
  }
  case 0x67:
  {
    #include "insns/jal.h"
    break;
  }
  case 0x68:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x2:
      {
        #include "insns/l_s.h"
        break;
      }
      case 0x3:
      {
        #include "insns/l_d.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x69:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x2:
      {
        #include "insns/s_s.h"
        break;
      }
      case 0x3:
      {
        #include "insns/s_d.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x6a:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfe007fe0) == 0xd40002a0)
        {
          #include "insns/c_eq_s.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd40000a0)
        {
          #include "insns/sgninj_s.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xd40001c0)
        {
          #include "insns/cvt_s_w.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd40005e0)
        {
          #include "insns/cvtu_s_w_rm.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd4000500)
        {
          #include "insns/cvt_l_s_rm.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd4000000)
        {
          #include "insns/add_s.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd40005a0)
        {
          #include "insns/cvtu_s_l_rm.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd4000b00)
        {
          #include "insns/mff_s.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xd4000b80)
        {
          #include "insns/mtf_s.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd40000c0)
        {
          #include "insns/sgninjn_s.h"
          break;
        }
        if((insn.bits & 0xfe0067e0) == 0xd4000440)
        {
          #include "insns/mul_s_rm.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd4000520)
        {
          #include "insns/cvtu_l_s_rm.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd40005c0)
        {
          #include "insns/cvt_s_w_rm.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xd40001e0)
        {
          #include "insns/cvtu_s_w.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xd40001a0)
        {
          #include "insns/cvtu_s_l.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd4000480)
        {
          #include "insns/sqrt_s_rm.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd4000660)
        {
          #include "insns/cvt_s_d_rm.h"
          break;
        }
        if((insn.bits & 0xfe0067e0) == 0xd4000420)
        {
          #include "insns/sub_s_rm.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xd4000180)
        {
          #include "insns/cvt_s_l.h"
          break;
        }
        if((insn.bits & 0xfe0067e0) == 0xd4000460)
        {
          #include "insns/div_s_rm.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd4000020)
        {
          #include "insns/sub_s.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd4000580)
        {
          #include "insns/cvt_s_l_rm.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xd4000080)
        {
          #include "insns/sqrt_s.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd40002c0)
        {
          #include "insns/c_lt_s.h"
          break;
        }
        if((insn.bits & 0xfe0067e0) == 0xd4000400)
        {
          #include "insns/add_s_rm.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd40000e0)
        {
          #include "insns/sgnmul_s.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd4000060)
        {
          #include "insns/div_s.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xd4000260)
        {
          #include "insns/cvt_s_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd40002e0)
        {
          #include "insns/c_le_s.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd4000040)
        {
          #include "insns/mul_s.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd4000540)
        {
          #include "insns/cvt_w_s_rm.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd4000560)
        {
          #include "insns/cvtu_w_s_rm.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        if((insn.bits & 0xfe0fffe0) == 0xd4006b00)
        {
          #include "insns/mff_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd40060a0)
        {
          #include "insns/sgninj_d.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd4006580)
        {
          #include "insns/cvt_d_l_rm.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd4006060)
        {
          #include "insns/div_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd40062a0)
        {
          #include "insns/c_eq_d.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xd40061a0)
        {
          #include "insns/cvtu_d_l.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd4006540)
        {
          #include "insns/cvt_w_d_rm.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xd40061e0)
        {
          #include "insns/cvtu_d_w.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd4006b20)
        {
          #include "insns/mffl_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd4006000)
        {
          #include "insns/add_d.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd4006b40)
        {
          #include "insns/mffh_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd40062e0)
        {
          #include "insns/c_le_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd40060e0)
        {
          #include "insns/sgnmul_d.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd4006560)
        {
          #include "insns/cvtu_w_d_rm.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd4006480)
        {
          #include "insns/sqrt_d_rm.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd40060c0)
        {
          #include "insns/sgninjn_d.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd40065a0)
        {
          #include "insns/cvtu_d_l_rm.h"
          break;
        }
        if((insn.bits & 0xfe0067e0) == 0xd4006400)
        {
          #include "insns/add_d_rm.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd4006500)
        {
          #include "insns/cvt_l_d_rm.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd4006f80)
        {
          #include "insns/mtflh_d.h"
          break;
        }
        if((insn.bits & 0xfff067e0) == 0xd4006520)
        {
          #include "insns/cvtu_l_d_rm.h"
          break;
        }
        if((insn.bits & 0xfe0067e0) == 0xd4006440)
        {
          #include "insns/mul_d_rm.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd4006020)
        {
          #include "insns/sub_d.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xd4006b80)
        {
          #include "insns/mtf_d.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xd4006080)
        {
          #include "insns/sqrt_d.h"
          break;
        }
        if((insn.bits & 0xfe0067e0) == 0xd4006460)
        {
          #include "insns/div_d_rm.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xd4006200)
        {
          #include "insns/cvt_d_s.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xd40061c0)
        {
          #include "insns/cvt_d_w.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xd4006180)
        {
          #include "insns/cvt_d_l.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd4006040)
        {
          #include "insns/mul_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd40062c0)
        {
          #include "insns/c_lt_d.h"
          break;
        }
        if((insn.bits & 0xfe0067e0) == 0xd4006420)
        {
          #include "insns/sub_d_rm.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x6c:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfe006400) == 0xd8000400)
        {
          #include "insns/madd_s_rm.h"
          break;
        }
        if((insn.bits & 0xfe007c00) == 0xd8000000)
        {
          #include "insns/madd_s.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        if((insn.bits & 0xfe006400) == 0xd8006400)
        {
          #include "insns/madd_d_rm.h"
          break;
        }
        if((insn.bits & 0xfe007c00) == 0xd8006000)
        {
          #include "insns/madd_d.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x6d:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfe006400) == 0xda000400)
        {
          #include "insns/msub_s_rm.h"
          break;
        }
        if((insn.bits & 0xfe007c00) == 0xda000000)
        {
          #include "insns/msub_s.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        if((insn.bits & 0xfe007c00) == 0xda006000)
        {
          #include "insns/msub_d.h"
          break;
        }
        if((insn.bits & 0xfe006400) == 0xda006400)
        {
          #include "insns/msub_d_rm.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x6e:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfe007c00) == 0xdc000000)
        {
          #include "insns/nmsub_s.h"
          break;
        }
        if((insn.bits & 0xfe006400) == 0xdc000400)
        {
          #include "insns/nmsub_s_rm.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        if((insn.bits & 0xfe007c00) == 0xdc006000)
        {
          #include "insns/nmsub_d.h"
          break;
        }
        if((insn.bits & 0xfe006400) == 0xdc006400)
        {
          #include "insns/nmsub_d_rm.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x6f:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfe007c00) == 0xde000000)
        {
          #include "insns/nmadd_s.h"
          break;
        }
        if((insn.bits & 0xfe006400) == 0xde000400)
        {
          #include "insns/nmadd_s_rm.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        if((insn.bits & 0xfe007c00) == 0xde006000)
        {
          #include "insns/nmadd_d.h"
          break;
        }
        if((insn.bits & 0xfe006400) == 0xde006400)
        {
          #include "insns/nmadd_d_rm.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x71:
  {
    #include "insns/lui.h"
    break;
  }
  case 0x73:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        #include "insns/beq.h"
        break;
      }
      case 0x1:
      {
        #include "insns/bne.h"
        break;
      }
      case 0x4:
      {
        #include "insns/blt.h"
        break;
      }
      case 0x5:
      {
        #include "insns/bge.h"
        break;
      }
      case 0x6:
      {
        #include "insns/bltu.h"
        break;
      }
      case 0x7:
      {
        #include "insns/bgeu.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x74:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        #include "insns/addi.h"
        break;
      }
      case 0x2:
      {
        #include "insns/slti.h"
        break;
      }
      case 0x3:
      {
        #include "insns/sltiu.h"
        break;
      }
      case 0x4:
      {
        #include "insns/andi.h"
        break;
      }
      case 0x5:
      {
        #include "insns/ori.h"
        break;
      }
      case 0x6:
      {
        #include "insns/xori.h"
        break;
      }
      case 0x7:
      {
        if((insn.bits & 0xfe007fc0) == 0xe8007080)
        {
          #include "insns/srli.h"
          break;
        }
        if((insn.bits & 0xfe007fc0) == 0xe80070c0)
        {
          #include "insns/srai.h"
          break;
        }
        if((insn.bits & 0xfe007fc0) == 0xe8007040)
        {
          #include "insns/slli.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x75:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfe007fe0) == 0xea000000)
        {
          #include "insns/add.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea0000e0)
        {
          #include "insns/nor.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea000060)
        {
          #include "insns/sltu.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea0000c0)
        {
          #include "insns/xor.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea000020)
        {
          #include "insns/sub.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea0000a0)
        {
          #include "insns/or.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea000040)
        {
          #include "insns/slt.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea000080)
        {
          #include "insns/and.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0xfe007fe0) == 0xea001000)
        {
          #include "insns/mul.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea001080)
        {
          #include "insns/div.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea0010c0)
        {
          #include "insns/rem.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea001040)
        {
          #include "insns/mulh.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea0010e0)
        {
          #include "insns/remu.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea001060)
        {
          #include "insns/mulhu.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea0010a0)
        {
          #include "insns/divu.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x7:
      {
        if((insn.bits & 0xfe007fe0) == 0xea0070c0)
        {
          #include "insns/sra.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea007080)
        {
          #include "insns/srl.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea007040)
        {
          #include "insns/sll.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x76:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        #include "insns/addiw.h"
        break;
      }
      case 0x7:
      {
        if((insn.bits & 0xfe007fe0) == 0xec007040)
        {
          #include "insns/slliw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xec007080)
        {
          #include "insns/srliw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xec0070c0)
        {
          #include "insns/sraiw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x77:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfe007fe0) == 0xee000000)
        {
          #include "insns/addw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xee000020)
        {
          #include "insns/subw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0xfe007fe0) == 0xee0010e0)
        {
          #include "insns/remuw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xee0010a0)
        {
          #include "insns/divuw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xee001060)
        {
          #include "insns/mulhuw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xee001000)
        {
          #include "insns/mulw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xee0010c0)
        {
          #include "insns/remw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xee001040)
        {
          #include "insns/mulhw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xee001080)
        {
          #include "insns/divw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x7:
      {
        if((insn.bits & 0xfe007fe0) == 0xee007080)
        {
          #include "insns/srlw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xee0070c0)
        {
          #include "insns/sraw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xee007040)
        {
          #include "insns/sllw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x78:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        #include "insns/lb.h"
        break;
      }
      case 0x1:
      {
        #include "insns/lh.h"
        break;
      }
      case 0x2:
      {
        #include "insns/lw.h"
        break;
      }
      case 0x3:
      {
        #include "insns/ld.h"
        break;
      }
      case 0x4:
      {
        #include "insns/lbu.h"
        break;
      }
      case 0x5:
      {
        #include "insns/lhu.h"
        break;
      }
      case 0x6:
      {
        #include "insns/lwu.h"
        break;
      }
      case 0x7:
      {
        if((insn.bits & 0xfff07000) == 0xf0007000)
        {
          #include "insns/synci.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x79:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        #include "insns/sb.h"
        break;
      }
      case 0x1:
      {
        #include "insns/sh.h"
        break;
      }
      case 0x2:
      {
        #include "insns/sw.h"
        break;
      }
      case 0x3:
      {
        #include "insns/sd.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x7a:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x2:
      {
        if((insn.bits & 0xfe007fe0) == 0xf4002040)
        {
          #include "insns/amow_and.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xf4002080)
        {
          #include "insns/amow_min.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xf4002060)
        {
          #include "insns/amow_or.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xf40020a0)
        {
          #include "insns/amow_max.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xf40020c0)
        {
          #include "insns/amow_minu.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xf4002000)
        {
          #include "insns/amow_add.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xf4002020)
        {
          #include "insns/amow_swap.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xf40020e0)
        {
          #include "insns/amow_maxu.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x3:
      {
        if((insn.bits & 0xfe007fe0) == 0xf4003000)
        {
          #include "insns/amo_add.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xf4003020)
        {
          #include "insns/amo_swap.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xf4003060)
        {
          #include "insns/amo_or.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xf40030a0)
        {
          #include "insns/amo_max.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xf4003080)
        {
          #include "insns/amo_min.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xf40030c0)
        {
          #include "insns/amo_minu.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xf4003040)
        {
          #include "insns/amo_and.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xf40030e0)
        {
          #include "insns/amo_maxu.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x7b:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfff07fe0) == 0xf6000000)
        {
          #include "insns/jalr_c.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xf6000040)
        {
          #include "insns/jalr_j.h"
          break;
        }
        if((insn.bits & 0xfff07fe0) == 0xf6000020)
        {
          #include "insns/jalr_r.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0xffffffe0) == 0xf6001000)
        {
          #include "insns/rdnpc.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x2:
      {
        if((insn.bits & 0xfe0fffe0) == 0xf6002000)
        {
          #include "insns/mfcr.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x3:
      {
        if((insn.bits & 0xfe007fff) == 0xf6003000)
        {
          #include "insns/mtcr.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x4:
      {
        if((insn.bits & 0xffffffff) == 0xf6004000)
        {
          #include "insns/sync.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x5:
      {
        if((insn.bits & 0xfffff000) == 0xf6005000)
        {
          #include "insns/syscall.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        if((insn.bits & 0xfffff000) == 0xf6006000)
        {
          #include "insns/break.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x7e:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xffffffe0) == 0xfc000000)
        {
          #include "insns/ei.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0xffffffe0) == 0xfc001000)
        {
          #include "insns/di.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x2:
      {
        if((insn.bits & 0xffffffff) == 0xfc002000)
        {
          #include "insns/eret.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x4:
      {
        if((insn.bits & 0xfe0fffe0) == 0xfc004000)
        {
          #include "insns/mfpcr.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x5:
      {
        if((insn.bits & 0xfe007fff) == 0xfc005000)
        {
          #include "insns/mtpcr.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  default:
  {
    #include "insns/unimp.h"
  }
}
