import React from 'react';
import bg from '../assets/background.webp';
import bg2 from '../assets/bg2.webp';
import { FaArrowLeft } from 'react-icons/fa';
import pic1 from '../assets/pic_1.webp';
import pic2 from '../assets/pic_2.webp';
import pic7 from '../assets/pic_3.webp';
import pic4 from '../assets/pic_4.webp';
import pic5 from '../assets/pic_5.webp';
import pic6 from '../assets/pic_6.webp';
import pic3 from '../assets/pic_7.webp';
import pic8 from '../assets/pic_8.webp';
import poster_1 from '../assets/poster_1.svg';

const Gallery = () => {
    const images = [pic1,pic2,pic3,pic4,pic5,pic6,pic7,pic8,];

    return (
        <div id='galleryMain' className='w-screen h-screen bg-transparent text-white'>
            <a href='/' className='fixed z-50 text-white scale-200 m-6'><FaArrowLeft /></a>
            <img src={bg} className='w-full h-full object-cover fixed -z-10' alt="" />
            <div className='h-full w-full flex justify-center bg-[80%]'>
                <div id='scrollHta' className='h-screen w-3/5 not-sm:w-full p-4 overflow-y-scroll snap-center '>
                <h1 className='text-4xl ml-89 not-sm:mx-23 mt-5 not-sm:text-2xl'>Event Photos</h1>
                <div className='grid grid-cols-2 mt-10 gap-2 not-sm:grid-cols-1'>
                    {images.slice(5,).map((item,i)=>(
                        <div key={i} className='h-160 w-full bg-purple-400 rounded-md overflow-clip not-sm:h-122 not-sm:w-full'>
                            <img className='object-contain' src={item} alt={item} />
                    </div>
                    ))}
                    {images.slice(0,5).map((item,i)=>(
                        <div key={i} className='h-70 w-full bg-purple-400 rounded-md overflow-clip not-sm:h-54'>
                            <img className='object-contain' src={item} alt={item} />
                    </div>
                    ))}
                </div>
                </div>
            </div>
        </div>
    );
}

export default Gallery;
