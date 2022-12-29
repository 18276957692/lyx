using Gee;
namespace DataLink {
    public class IicGenerator : Generator {
        public uint16 ? slave_addr;
        public int mode;
        public bool ack_flag = true;
        public IicGenerator(int type){
            base(type);
        }

        public void set_slave_addr(uint16 ? slave_addr){
            this.slave_addr = slave_addr;
        }

        public void set_work_mode(int mode){
            this.mode = mode;
        }

        public void set_ack_flag(bool flag){
            this.ack_flag = flag;
        }

        public uint8[]? add_slave_addr(uint8[] data){
            return null;
        }

        public uint8[]? add_start_sig(uint8[] data){
            return null;
        }

        public uint8[]? add_stop_sig(uint8[] data){
            return null;
        }
        
        public uint8[]? add_clock_sig(){
            return null;
        }

        public override void composite_protocol_data(){
        }
        
    }
}