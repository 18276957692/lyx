using Gee;
namespace IO{
    public class MockIo : PhysicalIO,GLib.Object {
        public MockIo () {
            
        }

        construct {

        }

        ~MockIo () {

        }

        public int init(){
            info("mockio init");
            return 0;
        }

        public int destroy(){
            info("mockio destory");
            return 0;
        }

        public int out8 (uint64 offset, uint8 val8){
            return 0;
        }

        public int out16 (uint64 offset, uint16 val16){
            return 0;
        }

        public int out32 (uint64 offset, uint32 val32){
            return 0;
        }

        public int out64 (uint64 offset, uint64 val64){
            return 0;
        }
        public int block_out8 (uint64 offset, uint8[] buf8){
            return 0;
        }

        public int block_out16 (uint64 offset, uint16[] buf16){
            return 0;
        }

        public int block_out32 (uint64 offset, uint32[] buf32){
            return 0;
        }

        public int block_out64 (uint64 offset, uint64[] buf64){
            return 0;
        }

        public int in8 (uint64 offset, out uint8 val8){
            return 0;
        }

        public int in16 (uint64 offset, out uint16 val16){
            return 0;
        }

        public int in32 (uint64 offset, out uint32 val32){
            return 0;
        }

        public int block_in32 (uint64 offset, uint32[] buf32){
            return 0;
        }
    }
}
