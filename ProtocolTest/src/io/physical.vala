using Gee;

namespace IO {
    public interface PhysicalIO : GLib.Object {
        public abstract int out8 (uint64 offset, uint8 val8);
        public abstract int out16 (uint64 offset, uint16 val16);
        public abstract int out32 (uint64 offset, uint32 val32);
        public abstract int out64 (uint64 offset, uint64 val64);
        public abstract int block_out8 (uint64 offset, uint8[] buf8);
        public abstract int block_out16 (uint64 offset, uint16[] buf16);
        public abstract int block_out32 (uint64 offset, uint32[] buf32);
        public abstract int block_out64 (uint64 offset, uint64[] buf64);
        public abstract int in8 (uint64 offset, out uint8 val8);
        public abstract int in16 (uint64 offset, out uint16 val16);
        public abstract int in32 (uint64 offset, out uint32 val32);
        public abstract int block_in32 (uint64 offset, uint32[] buf32);

        public abstract int init ();
        public abstract int destroy ();
    }
}